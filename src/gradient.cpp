#include <iostream>
#include "ppm_image.h"
#include "AGLM.h"
#include "ray.h"

using namespace glm;
using namespace agl;
using namespace std;

color ray_color(const ray& ray)
{
   return color(0);
}

void ray_trace(ppm_image& image)
{
   int height = image.height();
   int width = image.width();

   image.save("gradient.png");
}
