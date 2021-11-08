/*
 * PointLight.h
 *
 *
 */

#ifndef POINTLIGHT_H_
#define POINTLIGHT_H_

#include "core/LightSource.h"


namespace rt{

class PointLight: public LightSource{

public:
    PointLight();
    PointLight(Vec3f pos, Vec3f is, Vec3f id):LightSource(pos),is(is),id(id){}

    Vec3f getIs(){ return is;}
    Vec3f getId(){ return id;}
    Vec3f getSamplePoint(){return pos;};

private:

	Vec3f is;
    Vec3f id;

};



} //namespace rt




#endif /* POINTLIGHT_H_ */
