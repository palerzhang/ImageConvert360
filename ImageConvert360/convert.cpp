#include "convert.h"

float pridict_cam_dis(int w, int h)
{
	// 60 - 80
	int l = (w > h ? w : h);
	int a = 60 + rand() % 20;

	float r = 180.0 * l / __PI / a;
	return r;
}

polar map_from_point(point p, float r, float theta, int w, int h)
{
	// center and move to -r
	float x, y, z;
	x = p.x - w / 2.0f;
	y = p.y - h / 2.0f;
	z = -r;

	// rotate with x
	// use -theta
	y = y * cos(-theta) + z * sin(-theta);
	z = z * cos(-theta) - y * sin(-theta);
}