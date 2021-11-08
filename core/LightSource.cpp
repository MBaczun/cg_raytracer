/*
 * LightSource.cpp
 *
 */
#include "LightSource.h"

#include "lights/PointLight.h"
#include "lights/AreaLight.h"

#include <iostream>

namespace rt{

LightSource* LightSource::createLightSource(Value& lightSpecs){

	if (!lightSpecs.HasMember("type")){
		std::cerr<<"Camera type not specified"<<std::endl;
		exit(-1);
	}

	std::string shapeType=lightSpecs["type"].GetString();

	//return camera object based on camera specs
	if (shapeType.compare("pointlight")==0){
		Vec3f pos = Vec3f(lightSpecs["position"][0].GetFloat(), 
		                  lightSpecs["position"][1].GetFloat(), 
					      lightSpecs["position"][2].GetFloat());
		Vec3f is = Vec3f(lightSpecs["is"][0].GetFloat(), 
		                  lightSpecs["is"][1].GetFloat(), 
					      lightSpecs["is"][2].GetFloat());
		Vec3f id = Vec3f(lightSpecs["id"][0].GetFloat(), 
		                  lightSpecs["id"][1].GetFloat(), 
					      lightSpecs["id"][2].GetFloat());
		return new PointLight(pos, is, id);
	}
    else if (shapeType.compare("arealight")==0){
		Vec3f c1 = Vec3f(lightSpecs["c1"][0].GetFloat(), 
		                  lightSpecs["c1"][1].GetFloat(), 
					      lightSpecs["c1"][2].GetFloat());
		Vec3f c2 = Vec3f(lightSpecs["c2"][0].GetFloat(), 
		                  lightSpecs["c2"][1].GetFloat(), 
					      lightSpecs["c2"][2].GetFloat());
		Vec3f c3 = Vec3f(lightSpecs["c3"][0].GetFloat(), 
		                  lightSpecs["c3"][1].GetFloat(), 
					      lightSpecs["c3"][2].GetFloat());
		Vec3f is = Vec3f(lightSpecs["is"][0].GetFloat(), 
		                  lightSpecs["is"][1].GetFloat(), 
					      lightSpecs["is"][2].GetFloat());
		Vec3f id = Vec3f(lightSpecs["id"][0].GetFloat(), 
		                  lightSpecs["id"][1].GetFloat(), 
					      lightSpecs["id"][2].GetFloat());
		return new AreaLight(c1, c2, c3, is, id);
	}
	return 0;

}



} //namespace rt

