#include <iostream>
#include <string>
#include <stdexcept>

// Area functions
double areaSquare(double side)                    { return side * side; }
double areaRectangle(double length, double width) { return length * width; }
double areaTriangle(double base, double height)   { return 0.5 * base * height; }

// Input helpers 
// Reads one line from the user. Returns false if the input stream has ended.
bool readLine(std::string& line) {
    std::getline(std::cin, line);
    return static_cast<bool>(std::cin);
}

// Keeps asking until the user types a positive number.
bool readPositiveNumber(const std::string& prompt, double& value) {
    std::string line;
    while (true) {
        std::cout << prompt;
        if (!readLine(line)) return false;
        try {
            std::size_t used = 0;
            double v = std::stod(line, &used);
            if (used == line.size() && v > 0) {
                value = v;
                return true;
            }
        } catch (const std::exception&) {
            // fall through to the error message below
        }
        std::cout << "Invalid number. Please enter a positive number." << std::endl;
    }
}

void showMenu() {
    std::cout << "\nPlease select the area of the shape to calculate\n"
              << "1. Square\n"
              << "2. Rectangle\n"
              << "3. Triangle\n"
              << "4. Quit Program\n\n"
              << "Enter selection: ";
}

int main() {
    bool running = true;

    while (running) {
        showMenu();

        std::string line;
        if (!readLine(line)) break;            // input closed

        // Menu choices are the single characters "1".."4"; anything else is invalid.
        if (line == "1") {
            double side;
            if (!readPositiveNumber("Enter the side length of the square: ", side)) break;
            std::cout << "The area of the square is: " << areaSquare(side) << std::endl;
        }
        else if (line == "2") {
            double length, width;
            if (!readPositiveNumber("Enter the length of the rectangle: ", length)) break;
            if (!readPositiveNumber("Enter the width of the rectangle: ", width)) break;
            std::cout << "The area of the rectangle is: " << areaRectangle(length, width) << std::endl;
        }
        else if (line == "3") {
            double base, height;
            if (!readPositiveNumber("Enter the base of the triangle: ", base)) break;
            if (!readPositiveNumber("Enter the height of the triangle: ", height)) break;
            std::cout << "The area of the triangle is: " << areaTriangle(base, height) << std::endl;
        }
        else if (line == "4") {
            std::cout << "Goodbye!" << std::endl;
            running = false;
        }
        else {
            std::cout << "Your input was: " << line << " which is an invalid input\n"
                      << "Please enter a valid input!!!" << std::endl;
        }
    return 0;
}
