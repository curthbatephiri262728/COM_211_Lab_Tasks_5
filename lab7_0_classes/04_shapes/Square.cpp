#include "Square.h"

namespace shapes
{
    Square::Square() : mSide(0.0) {}
    Square::Square(double side) : mSide(side) {}
    Square::~Square() {}

    void   Square::SetSide(double side) { mSide = side; }
    double Square::GetSide() const      { return mSide; }
}
