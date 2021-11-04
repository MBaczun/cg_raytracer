/*
 * Material.h
 *
 */

#ifndef MATERIAL_H_
#define MATERIAL_H_

#include "math/geometry.h"
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

namespace rt{

class Material{
public:
    Material(){};
    Material(Vec3f dif):diffuse(dif){};
    Material(Vec3f dif, float ks, float kd, float specular, float kr):diffuse(dif), ks(ks), kd(kd), specular(specular), kr(kr), hasTex(false){};
    Material(Vec3f dif, float ks, float kd, float specular, float kr, std::string texture, int texW, int texH);

    Vec3f* getTexture(Vec2f);

    Vec3f getDiffuse(){ return diffuse;}

    float getKs(){ return ks;}
    float getKd(){ return kd;}
    float getSpec(){ return specular;}
    float getKr(){ return kr;}
    bool hasTexture(){ return hasTex;}

protected:
    Vec3f diffuse;
    float ks;
    float kd;
    float specular;
    float kr;
    bool hasTex;
    std::vector<Vec3f*> texture;
    int texW;
    int texH;
};


} //namespace rt



#endif /* MATERIAL_H_ */
