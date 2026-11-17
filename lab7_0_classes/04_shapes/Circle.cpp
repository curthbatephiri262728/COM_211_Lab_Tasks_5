#include "Circle.h"

namespace shapes
{
    Circle::Circle() : mRadius(0.0) {}
    Circle::Circle(double radius) : mRadius(radius) {}
    Circle::~Circle() {}

    void   Circle::SetRadius(double radius) { mRadius = radius; }
    double Circle::GetRadius() const        { return mRadius; }
}
