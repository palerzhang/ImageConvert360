#ifndef IMAGE_H
#define IMAGE_H

#include <stdlib.h>
#include <stdio.h>
#include <float.h>
#include <string.h>
#include <math.h>

typedef struct {
    int h;
    int w;
    int c;
    float *data;
} image;

image make_image(int w, int h, int c);
image copy_image(image p);
image load_image(char *filename, int w, int h, int c);
image load_image_color(char *filename, int w, int h);

float get_pixel(image m, int x, int y, int c);
void set_pixel(image m, int x, int y, int c, float val);
void add_pixel(image m, int x, int y, int c, float val);

void free_image(image m);
image resize_image(image im, int w, int h);
void save_image(image p, const char *name);

#endif