#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    // Part 1: pointers to objects on the stack
    Rectangle rect;
    Triangle trgl;
    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;
    pPoly1->SetValues(4, 5);
    pPoly2->SetValues(4, 5);
    cout << rect.Area() << '\n';
    cout << trgl.Area() << '\n';

    // Part 2: PrintArea() inside the abstract class uses "this"
    pPoly1->PrintArea();
    pPoly2->PrintArea();

    // Part 3: dynamically allocated objects, used through Polygon pointers
    Polygon* pPoly3 = new Rectangle(4, 5);
    Polygon* pPoly4 = new Triangle(4, 5);
    pPoly3->PrintArea();
    pPoly4->PrintArea();
    delete pPoly3;
    delete pPoly4;

    // Polygon mypolygon;   // would NOT compile: Polygon is abstract
    return 0;
}
