/*
 * Shape.cpp
 *
 */
#include "Shape.h"

#include "shapes/Sphere.h"
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
    //else if (shapeType.compare("triangle")==0){
	// 	return new Triangle();
	// }

	return 0;

}




} //namespace rt

