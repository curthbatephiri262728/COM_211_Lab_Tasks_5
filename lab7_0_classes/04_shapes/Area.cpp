#include "Area.h"

namespace
{
    const double PI = 3.14159265358979323846;
}

double Area::CalculateSquare(const shapes::Square& square)
{
    return square.GetSide() * square.GetSide();
}

double Area::CalculateTriangle(const shapes::Triangle& triangle)
{
    return 0.5 * triangle.GetBase() * triangle.GetHeight();
}

double Area::CalculateCircle(const shapes::Circle& circle)
{
    return PI * circle.GetRadius() * circle.GetRadius();
}
