#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon* pPoly1 = &rect;     // a Polygon pointer may hold the address of a Rectangle
    Polygon* pPoly2 = &trgl;
    pPoly1->SetValues(4, 5);     // fine: SetValues belongs to Polygon
    pPoly2->SetValues(4, 5);

    // pPoly1->Area() would NOT compile here: Polygon has no Area().
    cout << rect.Area() << '\n';
    cout << trgl.Area() << '\n';
    return 0;
}
