#include "Rectangle.h"

Rectangle::Rectangle() : mLength(0.0f), mWidth(0.0f) {}

Rectangle::Rectangle(float length, float width) : mLength(length), mWidth(width) {}

Rectangle::~Rectangle() {}

void  Rectangle::SetLength(float length) { mLength = length; }
void  Rectangle::SetWidth(float width)   { mWidth = width; }
float Rectangle::GetLength() const       { return mLength; }
float Rectangle::GetWidth() const        { return mWidth; }
float Rectangle::CalculateArea() const   { return mLength * mWidth; }
