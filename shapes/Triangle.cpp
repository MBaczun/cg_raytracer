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
        h.shape = this;
        h.t = INFINITY;

        Vec3f normal = (*v0-*v1).crossProduct(*v0-*v2).normalize();
        // return early if the ray is perpendicular.
        if (ray.dir.dotProduct(normal)==0) return h;
        //otherwise calculate point of intersection:
        float dist = (*v2-ray.origin).dotProduct(normal) / ray.dir.dotProduct(normal);
        Vec3f p = ray.origin + dist*ray.dir;

        //validate that the point p is within bounds
        // use cross products to figure out which side of each edge the point p is on.
        Vec3f edge_a = *v0 - *v1; 
        Vec3f edge_b = *v1 - *v2; 
        Vec3f edge_c = *v2 - *v0; 
        // p should be on the right hand side of all of these edges.
        Vec3f cross1 = edge_a.crossProduct(p-*v1); 
        Vec3f cross2 = edge_b.crossProduct(p-*v2); 
        Vec3f cross3 = edge_c.crossProduct(p-*v0); 

        if (cross1.dotProduct(normal) < 0 && cross2.dotProduct(normal) < 0 && cross3.dotProduct(normal) < 0  ) {
            h.t = dist;
            h.point = p;
            if (ray.dir.dotProduct(normal)<0) h.norm = normal;
            else h.norm = -normal;
        }

		return h;

	}


    Vec2f Triangle::textureCoordinates(Vec3f point){
        Vec3f base = *v1-*v0;
        Vec3f secondary_edge = *v2-*v0;
        
        float base_length = base.length();
        base = base.normalize();
        float length = max(base_length,secondary_edge.dotProduct(base));
        Vec3f vertical_component = (base.crossProduct(secondary_edge).normalize().crossProduct(base).normalize());
        float height = secondary_edge.dotProduct(vertical_component);

        float u = (point-*v0).dotProduct(base) / base_length;
        float v = (point-*v0).dotProduct(vertical_component) / height;
        //printf("u: %f, v: %f\n", u, v);
        return Vec2f(u,v);
    }

    Vec3f Triangle::getCorner(){
        return corner;
    }
	Vec3f Triangle::getWHD(){
        return whd;
    }

    void Triangle::setAABB() {
        float x = std::min(v0->x, std::min(v1->x, v2->x));
        float y = std::min(v0->y, std::min(v1->y, v2->y));
        float z = std::min(v0->z, std::min(v1->z, v2->z));
        corner = Vec3f(x, y, z);
        x = std::max(v0->x, std::max(v1->x, v2->x));
        y = std::max(v0->y, std::max(v1->y, v2->y));
        z = std::max(v0->z, std::max(v1->z, v2->z));
        whd = Vec3f(x-corner.x, y-corner.y, z-corner.z);
    }

} //namespace rt
