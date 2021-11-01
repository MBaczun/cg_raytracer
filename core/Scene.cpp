/*
 * Scene.cpp
 *
 */
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
	Hit h = shapes[0]->intersect(*ray);
	if (h.hit) {
		//printf("Hit\n");
		return shapes[0]->diffuse();
	}
	//printf("Miss\n");
	return Vec3f(0, 0 ,0);
}


} //namespace rt
