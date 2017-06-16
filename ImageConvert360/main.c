#include "image.h"

int main()
{
	image img = load_image("cat.jpg",0,0,3);
	save_image(img,"cat2");
	free_image(img);
	return 0;
}