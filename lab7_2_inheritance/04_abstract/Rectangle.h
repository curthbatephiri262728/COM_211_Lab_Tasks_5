#pragma once

#include "Polygon.h"

class Rectangle : public Polygon
{
public:
    Rectangle();
    Rectangle(int width, int height);
    int Area() override;
};
