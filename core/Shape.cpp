/*
 * Shape.cpp
 *
 */
#include "Shape.h"

#include "shapes/Sphere.h"
#include "shapes/Plane.h"
// #include "shapes/Triangle.h"
// #include "shapes/TriMesh.h"
// #include "shapes/BVH.h"

namespace rt{

Shape::~Shape(){};

Shape* Shape::createShape(Value& shapeSpecs){

	if (!shapeSpecs.HasMember("type")){
		std::cerr<<"Camera type not specified"<<std::endl;
		exit(-1);
	}

	std::string shapeType=shapeSpecs["type"].GetString();

	Vec3f diffuse = Vec3f(shapeSpecs["material"]["diffusecolor"][0].GetFloat(),
						  shapeSpecs["material"]["diffusecolor"][1].GetFloat(),
						  shapeSpecs["material"]["diffusecolor"][2].GetFloat());

	if (shapeType.compare("sphere")==0){
		Vec3f pos = Vec3f(shapeSpecs["center"][0].GetFloat(), 
		                  shapeSpecs["center"][1].GetFloat(), 
					      shapeSpecs["center"][2].GetFloat());
		return new Sphere(pos, shapeSpecs["radius"].GetFloat(), diffuse);

	}
    else if (shapeType.compare("plane")==0){
		Vec3f v0 = Vec3f(shapeSpecs["v0"][0].GetFloat(), 
		                  shapeSpecs["v0"][1].GetFloat(), 
					      shapeSpecs["v0"][2].GetFloat());
		Vec3f v1 = Vec3f(shapeSpecs["v1"][0].GetFloat(), 
		                  shapeSpecs["v1"][1].GetFloat(), 
					      shapeSpecs["v1"][2].GetFloat());
		Vec3f v2 = Vec3f(shapeSpecs["v2"][0].GetFloat(), 
		                  shapeSpecs["v2"][1].GetFloat(), 
					      shapeSpecs["v2"][2].GetFloat());
		Vec3f v3 = Vec3f(shapeSpecs["v3"][0].GetFloat(), 
		                  shapeSpecs["v3"][1].GetFloat(), 
					      shapeSpecs["v3"][2].GetFloat());
		return new Plane(v0, v1, v2, v3, diffuse);
		//return new Plane();
	}

	return 0;

}




} //namespace rt

