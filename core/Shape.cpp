/*
 * Shape.cpp
 *
 */
#include "Shape.h"

#include "shapes/Sphere.h"
#include "shapes/Plane.h"
#include "shapes/Triangle.h"
#include "shapes/TriMesh.h"
#include "shapes/BVH.h"

namespace rt{

Shape::~Shape(){};

Shape* Shape::createShape(Value& shapeSpecs){

	if (!shapeSpecs.HasMember("type")){
		std::cerr<<"Camera type not specified"<<std::endl;
		exit(-1);
	}

	std::string shapeType=shapeSpecs["type"].GetString();

	//material
	Vec3f diffuse =	jsonToVec(shapeSpecs["material"], "diffusecolor");
	float ks =	shapeSpecs["material"]["ks"].GetFloat();
	float kd =	shapeSpecs["material"]["kd"].GetFloat();
	float spec = shapeSpecs["material"]["specularexponent"].GetFloat();
	float kr = shapeSpecs["material"].HasMember("kr") ? shapeSpecs["material"]["kr"].GetFloat() : 0;
	Material* m;
	if (shapeSpecs["material"].HasMember("tPath")) {
		int tWidth = shapeSpecs["material"]["tWidth"].GetFloat();
		int tHeight = shapeSpecs["material"]["tHeight"].GetFloat();
		std::string path = shapeSpecs["material"]["tPath"].GetString();
		m = new Material(diffuse, ks, kd, spec, kr, path, tWidth, tHeight);
	} else {
		m = new Material(diffuse, ks, kd, spec, kr);
	}


	if (shapeType.compare("sphere")==0){
		Vec3f pos = jsonToVec(shapeSpecs, "center");
		return new Sphere(pos, shapeSpecs["radius"].GetFloat(), m);

	}
    else if (shapeType.compare("plane")==0){
		Vec3f v0 = jsonToVec(shapeSpecs, "v0");
		Vec3f v1 = jsonToVec(shapeSpecs, "v1");
		Vec3f v2 = jsonToVec(shapeSpecs, "v2");
		Vec3f v3 = jsonToVec(shapeSpecs, "v3");
		return new Plane(v0, v1, v2, v3, m);
	}
	else if (shapeType.compare("triangle")==0){
		Vec3f* v0 = new Vec3f(shapeSpecs["v0"][0].GetFloat(),
					 		  shapeSpecs["v0"][1].GetFloat(),
					          shapeSpecs["v0"][2].GetFloat());
		Vec3f* v1 = new Vec3f(shapeSpecs["v1"][0].GetFloat(),
					 		  shapeSpecs["v1"][1].GetFloat(),
					          shapeSpecs["v1"][2].GetFloat());
		Vec3f* v2 = new Vec3f(shapeSpecs["v2"][0].GetFloat(),
					 		  shapeSpecs["v2"][1].GetFloat(),
					          shapeSpecs["v2"][2].GetFloat());
		return new Triangle(v0, v1, v2, m);
	}
	else if (shapeType.compare("trimesh")==0){
		return new TriMesh(shapeSpecs["modelpath"].GetString(),
						   jsonToVec(shapeSpecs, "pos"),
						   shapeSpecs["scale"].GetFloat(),
						   shapeSpecs["vs"].GetInt(),
						   shapeSpecs["fs"].GetInt(),
						   m);
	}


	return 0;

}

Vec3f Shape::jsonToVec(Value& spec, std::string field){
	return Vec3f(spec[field.c_str()][0].GetFloat(),
				 spec[field.c_str()][1].GetFloat(),
				 spec[field.c_str()][2].GetFloat());
}

Shape* Shape::bvhShape(std::vector<Shape*> s) { 
	return new BVH(s);
}


} //namespace rt

