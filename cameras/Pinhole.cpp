/*
 * Pinhole.cpp
 *
 *
 */
#include <iostream>

#include "Pinhole.h"



namespace rt{

	//
	// Pinhole constructor (example)
	//
	Pinhole::Pinhole(int width, int height, int fov, Vec3f pos, Vec3f lookat, Vec3f up):Camera(width, height, fov, pos, lookat, up){
		// to fill
		Vec3f forward = (lookat).normalize(); 
		Vec3f side = -forward.crossProduct(up).normalize();
		Vec3f normUp = side.crossProduct(forward).normalize();

		this->camToWorld = new Matrix44f(side.x,    side.y,    side.z,    pos.x,
		                                 normUp.x,  normUp.y,  normUp.z,  pos.y,
										 forward.x, forward.y, forward.z, pos.z,
										 0,         0,         0,         1);
	}

	/**
	 * Prints camera data
	 * this function implements the abstract function of the base Camera class
	 */
	void Pinhole::printCamera(){
		printf("I am a pinhole camera! \n");
		printf("width: %dpx, height: %dpx, fov:%d \n", width, height, fov);
	}

	Ray* Pinhole::rasterToRay(int rasterX, int rasterY){
		float screenSpaceX = (2*((rasterX + 0.5)/width)-1) * tan(fov / 2 * M_PI / 180);
		float screenSpaceY = (1 - 2*((rasterY + 0.5)/height)) * tan(fov / 2 * M_PI / 180); 
		Vec3f dir = (Vec3f(screenSpaceX, screenSpaceY, -1)).normalize();
		Vec3f worldDir;
		camToWorld->multDirMatrix(dir, worldDir);
		worldDir = worldDir.normalize();
		Ray* r = new Ray();
		r->raytype = PRIMARY;
		r->origin = pos;
		r->dir = worldDir;
		return r;
	}



} //namespace rt

