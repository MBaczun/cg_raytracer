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

	Triangle();
	Triangle(Vec3f* v0, Vec3f* v1, Vec3f* v2): v0(v0), v1(v1), v2(v2){ setAABB(); };
	Triangle(Vec3f* v0, Vec3f* v1, Vec3f* v2, Material* m): v0(v0), v1(v1), v2(v2), Shape(m){ setAABB(); };

	virtual ~Triangle() {};

	Hit intersect(Ray ray);

	Vec2f textureCoordinates(Vec3f point);

	Vec3f getCorner();
	Vec3f getWHD();

private:

	void setAABB();

    Vec3f* v0;
    Vec3f* v1;
    Vec3f* v2;

	Vec3f corner;
	Vec3f whd;
};



} //namespace rt




#endif /* TRIANGLE_H_ */
