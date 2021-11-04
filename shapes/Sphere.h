/*
 * Sphere.h
 *
 *
 */

#ifndef SPHERE_H_
#define SPHERE_H_

#include "math/geometry.h"
#include "core/RayHitStructs.h"
#include "core/Shape.h"

namespace rt{

class Sphere:public Shape{

public:

	//
	// Constructors
	//
	Sphere();
	Sphere(Vec3f center, float radius, Material* m):center(center), radius(radius), Shape(m){};

	virtual ~Sphere();

	//
	// Functions that need to be implemented, since Sphere is a subclass of Shape
	//
	Hit intersect(Ray ray);
	Vec2f textureCoordinates(Vec3f point);

private:

	Vec3f center;
	float radius;

};



} //namespace rt




#endif /* SPHERE_H_ */
