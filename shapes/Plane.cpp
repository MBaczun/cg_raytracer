/*
 * Plane.cpp
 *
 *
 */
#include "Plane.h"


namespace rt{

Plane::Plane():Shape(){}

//Plane::~Plane(){}


	Hit Plane::intersect(Ray ray){

		Hit h;
        h.t = INFINITY;

        Vec3f normal = (v0-v1).crossProduct(v0-v2).normalize();
        // return early if the ray is perpendicular.
        if (ray.dir.dotProduct(normal)==0) return h;
        //otherwise calculate point of intersection:
        float dist = (v3-ray.origin).dotProduct(normal) / ray.dir.dotProduct(normal);
        Vec3f p = ray.origin + dist*ray.dir;

        //validate that the point p is within bounds
        // compute the size of the component lying in the direction of both sides of the plane.
        Vec3f width = v1-v0;
        Vec3f height = v3-v0;
        float x = (p-v0).dotProduct(width) / width.length();
        float y = (p-v0).dotProduct(height) / height.length();
        //printf("p: %f %f %f, x: %f, y: %f, width: %f %f %f, height: %f %f %f\n", p.x, p.y, p.z, x, y, width.x, width.y, width.z, height.x, height.y, height.z);
        //printf("p-v0: %f %f %f\n",(p-v0).x, (p-v0).y, (p-v0).z);

        if (x>=0 && x<= width.length() && y>=0 && y<=height.length()) {
            h.t = -dist;
            h.point = p;
            if (ray.dir.dotProduct(normal)>0) h.norm = normal;
            else h.norm = -normal;
        }

		return h;

	}



} //namespace rt


