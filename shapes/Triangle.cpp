/*
 * Triangle.cpp
 *
 *
 */
#include "Triangle.h"



namespace rt{


Triangle::Triangle():Shape(){}


	Hit Triangle::intersect(Ray ray){

		Hit h;
        h.t = INFINITY;

        Vec3f normal = (v0-v1).crossProduct(v0-v2).normalize();
        // return early if the ray is perpendicular.
        if (ray.dir.dotProduct(normal)==0) return h;
        //otherwise calculate point of intersection:
        float dist = (v2-ray.origin).dotProduct(normal) / ray.dir.dotProduct(normal);
        Vec3f p = ray.origin + dist*ray.dir;

        //validate that the point p is within bounds
        // use cross products to figure out which side of each edge the point p is on.
        Vec3f edge_a = v0 - v1; 
        Vec3f edge_b = v1 - v2; 
        Vec3f edge_c = v2 - v0; 
        // p should be on the right hand side of all of these edges.
        Vec3f cross1 = edge_a.crossProduct(p-v1); 
        Vec3f cross2 = edge_b.crossProduct(p-v2); 
        Vec3f cross3 = edge_c.crossProduct(p-v0); 

        if (cross1.dotProduct(normal) < 0 && cross2.dotProduct(normal) < 0 && cross3.dotProduct(normal) < 0  ) {
            h.t = dist;
            h.point = p;
            if (ray.dir.dotProduct(normal)<0) h.norm = normal;
            else h.norm = -normal;
        }

		return h;

	}




} //namespace rt
