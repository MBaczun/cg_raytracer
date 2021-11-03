/*
 * RayTracer.cpp
 *
 */
#include "RayTracer.h"
#include <algorithm>
#include <iostream>


namespace rt{


/**
 * Performs ray tracing to render a photorealistic scene
 *
 * @param camera the camera viewing the scene
 * @param scene the scene to render, including objects and lightsources
 * @param nbounces the number of bounces to consider for raytracing
 *
 * @return a pixel buffer containing pixel values in linear RGB format
 */
Vec3f* RayTracer::render(Camera* camera, Scene* scene, int nbounces){

	Vec3f* pixelbuffer=new Vec3f[camera->getWidth()*camera->getHeight()];

	//----------main rendering function to be filled------

	for (int x=0; x<camera->getWidth(); x++) {
		for (int y=0; y<camera->getHeight(); y++) {
			Ray* ray = camera->rasterToRay(x, y);
			//printf("%f,%f,%f\n",ray->dir[0],ray->dir[1],ray->dir[2]);
			int index = x + (y*camera->getWidth());
			pixelbuffer[index] = castRay(ray, scene);
		}
	}

	return pixelbuffer;

}

Vec3f RayTracer::castRay(Ray* ray, Scene* scene) {
	return scene->intersectionColour(ray);
}

/**
 * Tonemaps the rendered image (conversion of linear RGB values [0-1] to low dynamic range [0-255]
 *
 * @param pixelbuffer the array of size width*height containing linear RGB pixel values
 *
 * @return the tonemapped image
 */
Vec3f* RayTracer::tonemap(Vec3f* pixelbuffer, int size){
	//---------tonemapping function to be filled--------
	//find max
	float max = 0;
	for (int i=0; i<size; i++) {
		max = std::max({max, pixelbuffer[i].x, pixelbuffer[i].y, pixelbuffer[i].z});
	}
	//normalize
	for (int i=0; i<size; i++) {
		pixelbuffer[i] = pixelbuffer[i]*(255.0/max);
	}
	return pixelbuffer;
}


} //namespace rt


