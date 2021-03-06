/*
 * TriMesh.h
 *
 *
 */

#ifndef TRIMESH_H_
#define TRIMESH_H_

#include <string>
#include <vector>
#include "math/geometry.h"
#include "core/RayHitStructs.h"
#include "core/Shape.h"
#include "shapes/Triangle.h"
#include "shapes/BVH.h"
#include <iostream>
#include <fstream>
using namespace std;


namespace rt{

class TriMesh: public Shape{

public:
    TriMesh();
    TriMesh(std::string ply_file, Vec3f pos, float scale, int v_count, int f_count, Material* m);
    TriMesh(std::string ply_file, Vec3f pos, float scale, int v_count, int f_count, Matrix44f rot, Material* m);

    virtual ~TriMesh();

    Hit intersect(Ray ray);

	Vec2f textureCoordinates(Vec3f point) { return Vec2f(0.5);};

    Vec3f getCorner();
	Vec3f getWHD();

private:
    void populateVertices(std::string);
    Vec3f* getVectorFromLine(std::string s, Vec3f pos, float scale, bool rotate);

    Vec3f pos;
    float scale;
    int v_count;
    int f_count;
    Matrix44f rot;
    std::vector<Vec3f*> vertices;
    BVH* bvh;

    Vec3f corner;
	Vec3f whd;
};



} //namespace rt




#endif /* TRIMESH_H_ */
