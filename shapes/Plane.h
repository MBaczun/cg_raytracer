/*
 * Plane.h
 *
 *
 */

#ifndef PLANE_H_
#define PLANE_H_

#include "math/geometry.h"
#include "core/RayHitStructs.h"
#include "core/Shape.h"

namespace rt{

class Plane:public Shape{

public:

	//
	// Constructors
	//
	Plane();
	Plane(Vec3f v0, Vec3f v1, Vec3f v2, Vec3f v3, Material* m): v0(v0), v1(v1), v2(v2), v3(v3), Shape(m){setAABB();};

	virtual ~Plane() {};


	//
	// Functions that need to be implemented, since Sphere is a subclass of Shape
	//
	Hit intersect(Ray ray);

	Vec2f textureCoordinates(Vec3f point);

	Vec3f getCorner();
	Vec3f getWHD();

private:
	void setAABB();

    Vec3f v0;
    Vec3f v1;
    Vec3f v2;
    Vec3f v3;

	Vec3f corner;
	Vec3f whd;
};



} //namespace rt




#endif /* PLANE_H_ */
