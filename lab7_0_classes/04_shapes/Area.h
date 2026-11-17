#pragma once
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

// No member variables and no constructors: it only groups three static functions.
class Area
{
public:
    static double CalculateSquare(const shapes::Square& square);
    static double CalculateTriangle(const shapes::Triangle& triangle);
    static double CalculateCircle(const shapes::Circle& circle);
};
