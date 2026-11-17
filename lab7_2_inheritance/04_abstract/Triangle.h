#pragma once

#include "Polygon.h"

class Triangle : public Polygon
{
public:
    Triangle();
    Triangle(int width, int height);
    int Area() override;
};
