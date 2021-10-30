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

    Vec3f getDiffuse(){
        return diffuse;
    }

protected:
    Vec3f diffuse;
};


} //namespace rt



#endif /* MATERIAL_H_ */
