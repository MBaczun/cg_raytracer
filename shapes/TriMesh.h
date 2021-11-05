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
#include <iostream>
#include <fstream>
using namespace std;


namespace rt{

class TriMesh: public Shape{

public:
    TriMesh();
    TriMesh(std::string ply_file, Vec3f pos, float scale, int v_count, int f_count, Material* m);

    virtual ~TriMesh();

    Hit intersect(Ray ray);

	Vec2f textureCoordinates(Vec3f point) { return Vec2f(0.5);};
private:
    void populateVertices(std::string);
    Vec3f* getVectorFromLine(std::string s, Vec3f pos, float scale);

    Vec3f pos;
    float scale;
    int v_count;
    int f_count;
    std::vector<Vec3f*> vertices;
    std::vector<Triangle*> faces;
};



} //namespace rt




#endif /* TRIMESH_H_ */
