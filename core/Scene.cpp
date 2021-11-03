/*
 * Scene.cpp
 *
 */

#define _USE_MATH_DEFINES
#include <cmath>
#include "Scene.h"

#include "shapes/Sphere.h"

namespace rt{

/**
 * Parses json scene object to generate scene to render
 *
 * @param scenespecs the json scene specificatioon
 */
void Scene::createScene(Value& scenespecs){

	//----------parse json object to populate scene-----------

	Value& scene_shapes=scenespecs["shapes"];
	Value& scene_lightsources=scenespecs["lightsources"];

	//set background colour
	background = Vec3f(scenespecs["backgroundcolor"][0].GetFloat(),scenespecs["backgroundcolor"][1].GetFloat(),scenespecs["backgroundcolor"][2].GetFloat());

	//iterate through shapes
	std::cout<<"'scee_shapes' contains "<<scene_shapes.Size()<<" elements:"<<std::endl;
	for (SizeType i = 0; i < scene_shapes.Size(); i++) {
	        printf("scene_shapes[%d] = %s\n", i, scene_shapes[i].GetObject()["type"].GetString());
			shapes.push_back(Shape::createShape(scene_shapes[i]));
	}

	//iterate through lightsources
	std::cout<<"'scene_lightsources' contains "<<scene_lightsources.Size()<<" elements:"<<std::endl;
	for (SizeType i = 0; i < scene_lightsources.Size(); i++) {
	        printf("scene_lightsources[%d] = %s\n", i, scene_lightsources[i].GetObject()["type"].GetString());
			lightSources.push_back(LightSource::createLightSource(scene_lightsources[i]));
	}
}

Vec3f Scene::intersectionColour(Ray* ray) {
	int best_shape = -1;
	float best_t = INFINITY;
	Hit best_h;
	for (int i=0; i<shapes.size(); i++) {
		Hit h = shapes[i]->intersect(*ray);
		if (h.t < best_t) {
			best_t = h.t;
			best_shape = i;
			best_h = h;
			//colour = Vec3f(h.t/8.0);//shapes[i]->diffuse();
		}
	}
	if (best_t==INFINITY) return background;

	//blinn phong shading
	Vec3f intensity = Vec3f(0);
	LightSource* light = lightSources[0];
	Shape* shape = shapes[best_shape];
	Vec3f l = light->getPos();
	Vec3f l_hat = (l-best_h.point).normalize();
	Vec3f n_hat = best_h.norm;
	Vec3f v = ray->origin-best_h.point;
	Vec3f h = (l+v).normalize();

	Vec3f is = light->getIs();
	Vec3f id = light->getId();
	float kd = shape->getKd();
	float ks = shape->getKs();
	float spec = shape->getSpec();
	float distance = (l-best_h.point).length();
	
	Vec3f diffuse = kd * shape->getDiffuse() * std::max(0.f, n_hat.dotProduct(l_hat)) * id * (1/distance);
	Vec3f specular = ks * pow((std::max(0.f, n_hat.dotProduct(h))),spec) * is * (1/distance);

	intensity = intensity + diffuse + specular;

	return intensity;
}


} //namespace rt
