/*
 * Plane.cpp
 *
 *
 */
#include "Plane.h"


namespace rt{

Plane::Plane():Shape(){}


	Hit Plane::intersect(Ray ray){

		Hit h;
        h.shape = this;
        h.t = INFINITY;

        Vec3f normal = (v0-v1).crossProduct(v0-v2).normalize();
        // return early if the ray is perpendicular to the normal.
        if (ray.dir.dotProduct(normal)==0) return h;
        //otherwise calculate point of intersection:
        float dist = (v3-ray.origin).dotProduct(normal) / ray.dir.dotProduct(normal);
        if (dist<0) return h;
        Vec3f p = ray.origin + dist*ray.dir;

        //validate that the point p is within bounds
        // compute the size of the component lying in the direction of both sides of the plane.
        Vec3f width = v1-v0;
        Vec3f height = v3-v0;
        float x = (p-v0).dotProduct(width) / width.length();
        float y = (p-v0).dotProduct(height) / height.length();

        if (x>=0 && x<= width.length() && y>=0 && y<=height.length()) {
            h.t = dist;
            h.point = p;
            if (ray.dir.dotProduct(normal)<0) h.norm = normal;
            else h.norm = -normal;
        }

		return h;

	}

    Vec2f Plane::textureCoordinates(Vec3f point){
        Vec3f width = (v1-v0);
        Vec3f height = (v3-v0);
        Vec3f p = (point-v0);
        float u = (p.dotProduct(width) / width.length())/width.length();
        float v = (p.dotProduct(height) / height.length())/height.length();
        return(Vec2f(u,v));
    }

    Vec3f Plane::getCorner(){
        return corner;
    }
	Vec3f Plane::getWHD(){
        return whd;
    }

    void Plane::setAABB() {
        float x = std::min(std::min(v0.x,v1.x), std::min(v2.x, v3.x));
        float y = std::min(std::min(v0.y,v1.y), std::min(v2.y, v3.y));
        float z = std::min(std::min(v0.z,v1.z), std::min(v2.z, v3.z));
        corner = Vec3f(x, y, z);
        x = std::max(std::max(v0.x,v1.x), std::max(v2.x, v3.x));
        y = std::max(std::max(v0.y,v1.y), std::max(v2.y, v3.y));
        z = std::max(std::max(v0.z,v1.z), std::max(v2.z, v3.z));
        whd = Vec3f(x-corner.x, y-corner.y, z-corner.z);
    }

} //namespace rt


