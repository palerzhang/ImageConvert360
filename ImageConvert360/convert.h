#ifndef _CONVERT_H__
#define _CONVERT_H__

#include "image.h"
#define __PI 3.14159265359

typedef struct{
	float x;
	float y;
	float z;
} point;

typedef struct{
	float alpha;
	float beta;
} polar;

float pridict_cam_dis(int w, int h);

polar map_from_point(point p, float r, float theta, int w, int h);

#endif