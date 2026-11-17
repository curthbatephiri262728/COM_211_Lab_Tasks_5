#include <iostream>
#include <limits>
#include "Area.h"
using namespace std;

// Keeps asking until the user types a valid number (stops the program
// from looping forever if someone types letters).
static double ReadNumber(const string& prompt)
{
    double value = 0.0;
    cout << prompt;
    while (!(cin >> value))
    {
        if (cin.eof()) return 0.0;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a number: ";
    }
    return value;
}

int main()
{
    int choice = 0;
    while (choice != 4)
    {
        cout << "\n1. Calculate the area of a square\n"
             << "2. Calculate the area of a triangle\n"
             << "3. Calculate the area of a circle\n"
             << "4. Quit\n"
             << "Choose an option: ";

        if (!(cin >> choice))
        {
            if (cin.eof()) break;            // input ended
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = 0;
        }

        if (choice == 1)
        {
            shapes::Square square;
            square.SetSide(ReadNumber("Enter the side length: "));
            cout << "Area of the square: " << Area::CalculateSquare(square) << endl;
        }
        else if (choice == 2)
        {
            shapes::Triangle triangle;
            triangle.SetBase(ReadNumber("Enter the base: "));
            triangle.SetHeight(ReadNumber("Enter the height: "));
            cout << "Area of the triangle: " << Area::CalculateTriangle(triangle) << endl;
        }
        else if (choice == 3)
        {
            shapes::Circle circle;
            circle.SetRadius(ReadNumber("Enter the radius: "));
            cout << "Area of the circle: " << Area::CalculateCircle(circle) << endl;
        }
        else if (choice != 4)
        {
            cout << "Invalid option, try again." << endl;
        }
    }
    cout << "Goodbye!" << endl;
    return 0;
}
