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
	//if (ray->raytype==SECONDARY) printf("reflect time\n");
	int best_shape = -1;
	float best_t = INFINITY;
	Hit best_h;
	for (int i=0; i<shapes.size(); i++) {
		Hit h = shapes[i]->intersect(*ray);
		if (h.t > 0 && h.t < best_t) {
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

	Vec3f l = light->getPos();
	Ray lightRay;
	lightRay.origin = best_h.point + (1e-4)*best_h.norm;
	lightRay.dir = (l-best_h.point).normalize();

	// printf("%f ", intersects(lightRay).t);
	// printf("%f\n", (l-best_h.point).length());
	if (intersects(lightRay).t>=(l-best_h.point).length()) {
	
		Shape* shape = shapes[best_shape];
		Vec3f l_hat = (l-best_h.point).normalize();
		Vec3f n_hat = best_h.norm;
		Vec3f v = ray->origin-best_h.point;
		Vec3f h = (l+v).normalize();

		Vec3f is = light->getIs();
		Vec3f id = light->getId();
		float kd = shape->getKd();
		float ks = shape->getKs();
		float kr = shape->getKr();
		float spec = shape->getSpec();
		float distance = (l-best_h.point).length();

		//reflection
		Vec3f reflectColour = Vec3f(0);
		if (kr>0 && ray->raytype==PRIMARY) {
			Ray* reflectRay = new Ray();
			reflectRay->origin = lightRay.origin;
			//d-2(d.n)n
			reflectRay->dir = ray->dir - 2*(ray->dir.dotProduct(n_hat))*n_hat;
			reflectRay->raytype = SECONDARY;
		 	reflectColour = intersectionColour(reflectRay);
		}		 

		Vec3f baseColour = shape->textureColour(shape->textureCoordinates(best_h.point));
		// printf("baseColour: %f %f %f\n", baseColour.x, baseColour.y, baseColour.z);
		Vec3f diffuse = kd * baseColour * std::max(0.f, n_hat.dotProduct(l_hat)) * id * (1/(distance*distance));
		Vec3f specular = ks * pow((std::max(0.f, n_hat.dotProduct(h))),spec) * is * (1/(distance*distance));

		intensity = intensity + diffuse + specular + kr * reflectColour;
	}
	return intensity;
}

Hit Scene::intersects(Ray ray) {
	Hit best_h;
	best_h.t = INFINITY;
	for (int i=0; i<shapes.size(); i++) {
		Hit h = shapes[i]->intersect(ray);
		// printf("shape %d, hit.t %f, hit.point %f %f %f\n", i, h.t, h.point.x, h.point.y, h.point.z);
		// printf("normal: %f %f %f\n", h.norm.x, h.norm.y, h.norm.z);
		if (h.t > 0 && h.t < best_h.t) {
			best_h = h;
		}
	}
	// printf("%f\n",best_h.t);
	return best_h;
}

void Scene::test() {
	printf("TEST\n\n");
	
	// Ray r;
	// r.origin = Vec3f(1.5, 2.7, 0.15);
	// r.dir = Vec3f(-1, 0, 0);
	// Hit h = intersects(r);
	// printf("%f %f %f\n", h.point.x, h.point.y, h.point.z);
	// printf("%f\n",h.t);
}


} //namespace rt
