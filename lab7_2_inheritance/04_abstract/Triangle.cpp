#include "Triangle.h"

Triangle::Triangle() : Polygon() {}
Triangle::Triangle(int width, int height) : Polygon(width, height) {}

int Triangle::Area()
{
    return mWidth * mHeight / 2;
}
