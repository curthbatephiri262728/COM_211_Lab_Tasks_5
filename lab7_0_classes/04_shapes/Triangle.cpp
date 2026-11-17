#include "Triangle.h"

namespace shapes
{
    Triangle::Triangle() : mBase(0.0), mHeight(0.0) {}
    Triangle::Triangle(double base, double height) : mBase(base), mHeight(height) {}
    Triangle::~Triangle() {}

    void   Triangle::SetBase(double base)     { mBase = base; }
    void   Triangle::SetHeight(double height) { mHeight = height; }
    double Triangle::GetBase() const          { return mBase; }
    double Triangle::GetHeight() const        { return mHeight; }
}
