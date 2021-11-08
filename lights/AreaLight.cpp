/*
 * AreaLight.cpp
 *
 *
 */
#include "AreaLight.h"




namespace rt{

    AreaLight::AreaLight(Vec3f c1, Vec3f c2, Vec3f c3, Vec3f is, Vec3f id):LightSource((c1+c3)*0.5), is(is), id(id){
        corner = c2;
        width = c1-c2;
        height = c3-c2;
    }

    Vec3f AreaLight::getSamplePoint() {
        float rx = rand() / (float)RAND_MAX;
        float ry = rand() / (float)RAND_MAX;
        return (corner + rx*width + ry*height);
    }

} //namespace rt
