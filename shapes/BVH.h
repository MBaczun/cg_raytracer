/*
 * BVH.h
 *
 *
 */

#ifndef BVH_H_
#define BVH_H_

#include <vector>
#include "core/Shape.h"

namespace rt{

class BVH: public Shape{

public:
    BVH(std::vector<Shape*> shapes);

    virtual ~BVH(){};

    Hit intersect(Ray ray);
	Vec2f textureCoordinates(Vec3f point);

    Vec3f getCorner();
	Vec3f getWHD();

private:
    
    struct AABB{
        Vec3f corner;
        Vec3f whd; //width, height, depth.
    };

    AABB getShapeAABB(Shape* shape);
    bool intersectsAABB(Ray ray);

    bool isLeaf;
    BVH* leftBVH;
    BVH* rightBVH;
    int splitAxis;
    float splitPoint;
    Shape* shape;

    AABB aabb;

};



} //namespace rt



#endif /* BVH_H_ */
