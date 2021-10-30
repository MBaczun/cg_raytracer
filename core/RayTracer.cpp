/*
 * RayTracer.cpp
 *
 */
#include "RayTracer.h"


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
			int index = x + (y*camera->getWidth());
			pixelbuffer[index] = * castRay(ray, scene);
		}
	}

	return pixelbuffer;

}

Vec3f* RayTracer::castRay(Ray* ray, Scene* scene) {
	return new Vec3f(1, 0 ,0);
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
	for (int i=0; i<size; i++) {
		pixelbuffer[i] = pixelbuffer[i]*255;
	}
	return pixelbuffer;
}


} //namespace rt


