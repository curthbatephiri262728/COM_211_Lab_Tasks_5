#pragma once

class Polygon
{
protected:
    int mWidth;      // protected: visible to derived classes, hidden from main
    int mHeight;
public:
    void SetValues(int width, int height);
};
