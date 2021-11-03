/*
 * Material.h
 *
 */

#ifndef MATERIAL_H_
#define MATERIAL_H_

#include "math/geometry.h"

namespace rt{

class Material{
public:
    Material(){};
    Material(Vec3f dif):diffuse(dif){};
    Material(Vec3f dif, float ks, float kd, float specular):diffuse(dif), ks(ks), kd(kd), specular(specular){};

    Vec3f getDiffuse(){
        return diffuse;
    }

protected:
    Vec3f diffuse;
    float ks;
    float kd;
    float specular;
};


} //namespace rt



#endif /* MATERIAL_H_ */
