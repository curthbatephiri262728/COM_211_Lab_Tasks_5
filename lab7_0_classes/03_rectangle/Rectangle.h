#pragma once

class Rectangle
{
public:
    Rectangle();                            // default constructor: both values 0
    Rectangle(float length, float width);   // overloaded constructor (Task 2)
    ~Rectangle();                           // destructor: does nothing for now

    void  SetLength(float length);
    void  SetWidth(float width);
    float GetLength() const;
    float GetWidth() const;
    float CalculateArea() const;

private:
    float mLength;
    float mWidth;
};
