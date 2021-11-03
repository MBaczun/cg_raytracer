/*
 * Sphere.cpp
 *
 *
 */
#include "Sphere.h"


namespace rt{

Sphere::Sphere():Shape(){}

Sphere::~Sphere(){}


	/**
	 * Computes whether a ray hit the specific instance of a sphere shape and returns the hit data
	 *
	 * @param ray cast ray to check for intersection with shape
	 *
	 * @return hit struct containing intersection information
	 *
	 */
	Hit Sphere::intersect(Ray ray){

		Hit h;
		//-----------to be implemented -------------
		Vec3f oc = ray.origin - center;
		float a = ray.dir.dotProduct(ray.dir);
		float b = 2.0 * oc.dotProduct(ray.dir);
		float c = oc.dotProduct(oc) - radius*radius;
		float discriminant = b*b - 4*a*c;
		if (discriminant<0) {
			h.t = INFINITY;
		}
		else {
			h.t = -std::max((-b - sqrt(discriminant)) / (2.0*a), (-b + sqrt(discriminant)) / (2.0*a));
			h.point = ray.origin + (-h.t)*(ray.dir);
			h.norm = (h.point-center).normalize();
		}
		return h;

	}



} //namespace rt


