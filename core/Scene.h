/*
 * Scene.h
 *
 */

#ifndef SCENE_H_
#define SCENE_H_

#include <vector>

#include "rapidjson/document.h"

#include "core/LightSource.h"
#include "core/Shape.h"


using namespace rapidjson;

namespace rt{

class Scene {
public:

	Scene(){};

	void createScene(Value& scenespecs);

	Vec3f intersectionColour(Ray* ray, int spp);
	Hit intersects(Ray ray);

private:
	Shape* bvh;

	std::vector<LightSource*> lightSources;
	std::vector<Shape*> shapes;
	Vec3f background;

	int spp;

};

} //namespace rt



#endif /* SCENE_H_ */
