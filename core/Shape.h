/*
 * Shape.h
 *
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include "core/RayHitStructs.h"
#include "core/Material.h"
#include <string>
#include "rapidjson/document.h"

using namespace rapidjson;

namespace rt{

class Shape{
public:

	//
	// Constructors
	//
	Shape(){};
	Shape(Material* m):material(m){};

	//
	// Destructor (must be overriden in subclass)
	//
	virtual ~Shape();

	//
	// Shape abstract methods (to be implemented by subclasses)
	//
	virtual Hit intersect(Ray)=0;

	static Shape* createShape(Value& cameraSpecs);

	float getKs(){ return material->getKs();}
    float getKd(){ return material->getKd();}
    float getSpec(){ return material->getSpec();}
	Vec3f getDiffuse(){ return material->getDiffuse();}
	float getKr(){ return material->getKr();}

protected:

	static Vec3f jsonToVec(Value& spec, std::string field);

	Material * material;

};


} //namespace rt


#endif /* SHAPE_H_ */
