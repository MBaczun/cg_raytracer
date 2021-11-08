/*
 * AreaLight.h
 *
 *
 */

#ifndef AREALIGHT_H_
#define AREALIGHT_H_

#include "core/LightSource.h"

namespace rt{

class AreaLight:public LightSource{

public:
    AreaLight(Vec3f c1, Vec3f c2, Vec3f c3, Vec3f is, Vec3f id);

    Vec3f getIs(){ return is;}
    Vec3f getId(){ return id;}
    Vec3f getSamplePoint();

private:

	Vec3f is;
    Vec3f id;
    Vec3f corner;
    Vec3f width;
    Vec3f height;

};


} //namespace rt




#endif /* AREALIGHT_H_ */
