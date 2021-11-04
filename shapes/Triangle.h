/*
 * Triangle.h
 *
 *
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "math/geometry.h"
#include "core/RayHitStructs.h"
#include "core/Shape.h"

namespace rt{

class Triangle: public Shape{


public:

	//
	// Constructors
	//
	Triangle();
	Triangle(Vec3f v0, Vec3f v1, Vec3f v2, Material* m): v0(v0), v1(v1), v2(v2), Shape(m){};

	virtual ~Triangle() {};


	//
	// Functions that need to be implemented, since Sphere is a subclass of Shape
	//
	Hit intersect(Ray ray);

	Vec2f textureCoordinates(Vec3f point);

private:
    Vec3f v0;
    Vec3f v1;
    Vec3f v2;
};



} //namespace rt




#endif /* TRIANGLE_H_ */
