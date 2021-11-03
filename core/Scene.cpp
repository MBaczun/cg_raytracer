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
	Vec3f colour = background;
	float best_t = INFINITY;
	Hit best_h;
	for (int i=0; i<shapes.size(); i++) {
		Hit h = shapes[i]->intersect(*ray);
		if (h.t < best_t) {
			best_t = h.t;
			colour = shapes[i]->diffuse();
			best_h = h;
			//colour = Vec3f(h.t/8.0);//shapes[i]->diffuse();
		}
	}
	if (best_t==INFINITY) return colour;

	float albedo = 0.18;
	float intensity = 1;
	LightSource* light = lightSources[0];
	Vec3f l = light->getPos();
	//Vec3f shadedColour = albedo / M_PI * intensity * Vec3f(1) * std::max(0.f, best_h.norm.dotProduct(l-best_h.point));
	//float d = (l-best_h.point).length();
	Vec3f shadedColour = colour * std::max(0.f, best_h.norm.dotProduct((l-best_h.point).normalize()));

	return shadedColour;
}


} //namespace rt
