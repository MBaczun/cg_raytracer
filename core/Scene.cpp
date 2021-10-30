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
	Shape* shapes[scene_shapes.Size()];
	for (SizeType i = 0; i < scene_shapes.Size(); i++) {
	        printf("scene_shapes[%d] = %s\n", i, scene_shapes[i].GetObject()["type"].GetString());
			shapes[i] = Shape::createShape(scene_shapes[i]);
	}

	//iterate through lightsources
	std::cout<<"'scene_lightsources' contains "<<scene_lightsources.Size()<<" elements:"<<std::endl;
	LightSource* lights[scene_lightsources.Size()];
	for (SizeType i = 0; i < scene_lightsources.Size(); i++) {
	        printf("scene_lightsources[%d] = %s\n", i, scene_lightsources[i].GetObject()["type"].GetString());
			lights[i] = LightSource::createLightSource(scene_lightsources[i]);
	}
}


} //namespace rt
