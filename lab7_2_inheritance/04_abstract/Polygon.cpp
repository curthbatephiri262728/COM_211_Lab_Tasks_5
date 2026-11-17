#include "Polygon.h"
#include <iostream>

using namespace std;

Polygon::Polygon() : mWidth(0), mHeight(0) {}

Polygon::Polygon(int width, int height) : mWidth(width), mHeight(height) {}

Polygon::~Polygon() {}

void Polygon::SetValues(int width, int height)
{
    mWidth = width;
    mHeight = height;
}

void Polygon::PrintArea()
{
    // "this" really points at a Rectangle or a Triangle, so the
    // correct Area() is chosen at run time.
    cout << this->Area() << '\n';
}
