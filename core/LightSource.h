/*
 * LightSource.h
 *
 */

#ifndef LIGHTSOURCE_H_
#define LIGHTSOURCE_H_

#include "math/geometry.h"
#include "rapidjson/document.h"

using namespace rapidjson;


namespace rt{

class LightSource{
public:
    LightSource(){};
    LightSource(Vec3f pos):pos(pos){}
    
    static LightSource* createLightSource(Value& lightSpecs);


    Vec3f getPos() {
        return pos;
    }
    void setPos(Vec3f v) {
        this->pos = v;
    }

    virtual Vec3f getIs(){}
    virtual Vec3f getId(){}

protected:

	Vec3f pos;

};

} //namespace rt



#endif /* LIGHTSOURCE_H_ */
