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

	std::cout<<"scene has member 'shapes':"<<(scenespecs.HasMember("shapes")?"true":"false")<<std::endl;


	Value& shapes=scenespecs["shapes"];
	Value& lightsources=scenespecs["lightsources"];

	//iterate through shapes
	std::cout<<"'shapes' contains "<<shapes.Size()<<" elements:"<<std::endl;
	for (SizeType i = 0; i < shapes.Size(); i++) // Retrieve values through GetXXX() functions
	        printf("shapes[%d] = %s\n", i,
	        		shapes[i].GetObject()["type"].GetString());

	//iterate through lightsources
	std::cout<<"'lightsources' contains "<<lightsources.Size()<<" elements:"<<std::endl;
	for (SizeType i = 0; i < lightsources.Size(); i++) // Retrieve values through GetXXX() functions
	        printf("lightsources[%d] = %s\n", i,
	        		lightsources[i].GetObject()["type"].GetString());
}



} //namespace rt
