#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    // Task 1: default constructor, then the setter methods
    Rectangle first;
    float length = 0.0f, width = 0.0f;

    cout << "Rectangle 1 - enter length: ";
    cin >> length;
    cout << "Rectangle 1 - enter width: ";
    cin >> width;

    first.SetLength(length);
    first.SetWidth(width);
    cout << "Area of rectangle 1: " << first.CalculateArea() << endl;

    // Task 2: the overloaded constructor sets the values at creation
    cout << "Rectangle 2 - enter length: ";
    cin >> length;
    cout << "Rectangle 2 - enter width: ";
    cin >> width;

    Rectangle second(length, width);
    cout << "Area of rectangle 2: " << second.CalculateArea() << endl;
    return 0;
}
