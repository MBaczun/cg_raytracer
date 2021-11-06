/*
 * BVH.cpp
 *
 *
 */
#include "BVH.h"


namespace rt{

    BVH::BVH(std::vector<Shape*> shapes) {
        if (shapes.size()==0) { //hopefully this never happens
            printf("Warning: Zero sized BVH occured\n");
            return;
        }
        if (shapes.size() == 1) {
            isLeaf = true;
            shapeList.push_back(shapes[0]);
        }
        else {
            isLeaf = false;
            //compute and store bouding information
            std::vector<AABB> all_boxes;
            Vec3f corner = Vec3f(INFINITY);
            Vec3f farCorner = Vec3f(-INFINITY);
            for (int i=0; i<shapes.size(); i++) {
                AABB box = getShapeAABB(shapes[i]);

                corner.x = std::min(corner.x, box.corner.x);
                corner.y = std::min(corner.y, box.corner.y);
                corner.z = std::min(corner.z, box.corner.z);
                farCorner.x = std::max(farCorner.x, box.corner.x+box.whd.x);
                farCorner.y = std::max(farCorner.y, box.corner.y+box.whd.y);
                farCorner.z = std::max(farCorner.z, box.corner.z+box.whd.z);

                all_boxes.push_back(box);
            }
            // printf("far corner: %f %f %f\n", farCorner.x, farCorner.y, farCorner.z);
            aabb.corner = corner;
            aabb.whd = farCorner-corner;
            // printf("this BVH's AABB: corner %f %f %f, whd %f %f %f\n", aabb.corner.x, aabb.corner.y, aabb.corner.z, aabb.whd.x, aabb.whd.y, aabb.whd.z);

            //select split point
            splitAxis;
            if (aabb.whd.x > aabb.whd.y && aabb.whd.x > aabb.whd.z) {
                splitAxis = 0;
            } else if (aabb.whd.y > aabb.whd.z) {
                splitAxis = 1;
            } else {
                splitAxis = 2;
            }
            splitPoint = aabb.corner[splitAxis] + aabb.whd[splitAxis]/2;

            // printf("split axis: %d, split point: %f\n", splitAxis, splitPoint);

            //split shapes among child BVHs
            std::vector<Shape*> leftShapes;
            std::vector<Shape*> rightShapes;
            for (int i=0; i<all_boxes.size(); i++) {
                AABB current_aabb = all_boxes[i];
                Vec3f center = current_aabb.corner + 0.5*current_aabb.whd;
                if (center[splitAxis] < splitPoint) {
                    leftShapes.push_back(shapes[i]);
                } else {
                    rightShapes.push_back(shapes[i]);
                }
            }
            if (leftShapes.size()==0 || rightShapes.size()==0) {
                isLeaf = true;
                for (int i=0; i<shapes.size(); i++) {
                    shapeList.push_back(shapes[i]);
                }
            } else {
                leftBVH = new BVH(leftShapes);
                rightBVH = new BVH(rightShapes);
            }

        }
    }

    BVH::AABB BVH::getShapeAABB(Shape* shape) {
        AABB a;
        a.corner = shape->getCorner();
        a.whd = shape->getWHD();
        return a;
    }
    

    Hit BVH::intersect(Ray ray) {
        if (isLeaf) {
            Hit h;
            h.t = INFINITY;
            for (int i=0; i<shapeList.size(); i++) {
            	Hit h2 = shapeList[i]->intersect(ray);
            	if (h2.t > 0 && h2.t < h.t) h = h2;
            }
            return h;
        } else {
            Hit h;
            h.t = INFINITY;
            if (intersectsAABB(ray)) {
                Hit h1 = leftBVH->intersect(ray);
                if (h1.t>0 && h1.t < h.t) h=h1;
                Hit h2 = rightBVH->intersect(ray);
                if (h2.t>0 && h2.t < h.t) h=h2;
            } 
            return h;
        }
    }

	Vec2f BVH::textureCoordinates(Vec3f point) {
        return Vec2f(0.5, 0.5);
    }

    bool BVH::intersectsAABB(Ray ray){
        // 6 planes. Count intersections
        // ray: O + t*d, fix one of the axis values and find t.
        // O.x + t*d.x = corner.x    =>    t = (corner.x - O.x) / d.x
        float tx1 = (aabb.corner.x - ray.origin.x) / ray.dir.x; //may be infinity
        float ty1 = (aabb.corner.y - ray.origin.y) / ray.dir.y;
        float tz1 = (aabb.corner.z - ray.origin.z) / ray.dir.z;
        float tx2 = (aabb.corner.x + aabb.whd.x - ray.origin.x) / ray.dir.x;
        float ty2 = (aabb.corner.y + aabb.whd.y - ray.origin.y) / ray.dir.y;
        float tz2 = (aabb.corner.z + aabb.whd.z - ray.origin.z) / ray.dir.z;

        //make it such that the "1" planes are always closest
        if (tx1 > tx2) swap(tx1, tx2); 
        if (ty1 > ty2) swap(ty1, ty2); 
        if (tz1 > tz2) swap(tz1, tz2); 

        //We must go through all "close" planes before we go through any "far" planes
        //return if further plane is closer
        if (ty2<tx1 || tx2<ty1) return false; 
        //now compare to z planes
        if (tx1>tz2 || ty1>tz2 || tx2<tz1 || ty2<tz1) return false; 
        return true; 
    }

    Vec3f BVH::getCorner() {
        return aabb.corner;
    }
	Vec3f BVH::getWHD() {
        return aabb.whd;
    }



} //namespace rt


