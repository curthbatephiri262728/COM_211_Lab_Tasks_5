#pragma once

class Polygon
{
protected:
    int mWidth;
    int mHeight;
public:
    Polygon();
    Polygon(int width, int height);
    virtual ~Polygon();            // needed so delete through a Polygon* is safe

    void SetValues(int width, int height);
    virtual int Area() = 0;        // pure virtual: Polygon is now abstract
    void PrintArea();
};
