/*
 * Scene.cpp
 *
 */

#define _USE_MATH_DEFINES
#include <cmath>
#include "Scene.h"

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
	std::cout<<"'scene_shapes' contains "<<scene_shapes.Size()<<" elements:"<<std::endl;
	for (SizeType i = 0; i < scene_shapes.Size(); i++) {
	        printf("scene_shapes[%d] = %s\n", i, scene_shapes[i].GetObject()["type"].GetString());
			shapes.push_back(Shape::createShape(scene_shapes[i]));
	}
	printf("making bvh shape\n");
	bvh = Shape::bvhShape(shapes);

	//iterate through lightsources
	std::cout<<"'scene_lightsources' contains "<<scene_lightsources.Size()<<" elements:"<<std::endl;
	for (SizeType i = 0; i < scene_lightsources.Size(); i++) {
	        printf("scene_lightsources[%d] = %s\n", i, scene_lightsources[i].GetObject()["type"].GetString());
			lightSources.push_back(LightSource::createLightSource(scene_lightsources[i]));
	}
}

Vec3f Scene::intersectionColour(Ray* ray, int spp) {

	Hit	hit = bvh->intersect(*ray);
	
	if (hit.t==INFINITY) return background;

	//blinn phong shading
	Vec3f intensity = Vec3f(0);
	Shape* shape = hit.shape;
	
	float kd = shape->getKd();
	float ks = shape->getKs();
	float kr = shape->getKr();
	float spec = shape->getSpec();
	Vec3f n_hat = hit.norm;
	
	for (int lightNumber=0; lightNumber<lightSources.size(); lightNumber++) {
		LightSource* light = lightSources[lightNumber];
		Vec3f l = light->getPos();
		Vec3f is = light->getIs();
		Vec3f id = light->getId();
		Vec3f l_hat = (l-hit.point).normalize();
		Vec3f v = ray->origin-hit.point;
		Vec3f h = (l+v).normalize();
		float distance = (l-hit.point).length();

		//calculate visibility term
		float visibility = 0;
		Ray lightRay;
		for (int v=0; v<spp; v++) {
			lightRay.origin = hit.point + (1e-4)*hit.norm;
			Vec3f samplePoint = light->getSamplePoint();
			//printf("Sample point %f %f %f",samplePoint.x, samplePoint.y, samplePoint.z);
			lightRay.dir = (samplePoint-hit.point).normalize();
			if (intersects(lightRay).t>=(l-hit.point).length()) visibility = visibility + 1;
		}
		visibility = visibility / spp;

		//printf("visibility: %f\n", visibility);

		//check that we're not in shadow of this light
		if (visibility > 0) {
		
			Vec3f baseColour = shape->textureColour(shape->textureCoordinates(hit.point));
			Vec3f diffuse = kd * baseColour * std::max(0.f, n_hat.dotProduct(l_hat)) * id * (1/(distance*distance));
			Vec3f specular = ks * pow((std::max(0.f, n_hat.dotProduct(h))),spec) * is * (1/(distance*distance));

			intensity = intensity + visibility * (diffuse + specular);
		}
	}

	//reflection
	Vec3f reflectColour = Vec3f(0);
	if (kr>0 && ray->raytype==PRIMARY) {
		Ray* reflectRay = new Ray();
		reflectRay->origin = hit.point + (1e-4)*hit.norm;
		reflectRay->dir = ray->dir - 2*(ray->dir.dotProduct(n_hat))*n_hat;
		reflectRay->raytype = SECONDARY;
		reflectColour = intersectionColour(reflectRay, spp);
	}
	intensity = intensity + kr * reflectColour;

	return intensity;
}

Hit Scene::intersects(Ray ray) {
	Hit best_h;
	best_h.t = INFINITY;
	for (int i=0; i<shapes.size(); i++) {
		Hit h = shapes[i]->intersect(ray);
		if (h.t > 0 && h.t < best_h.t) {
			best_h = h;
		}
	}

	return best_h;
}



} //namespace rt
