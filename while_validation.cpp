// Exercise 4: Validate integer input between 5 and 10 using a while loop
#include <iostream>
#include <string>
#include <stdexcept>

// Tries to turn text into an int. Returns true only if the WHOLE text is a valid integer.
bool tryParseInt(const std::string& text, int& result) {
    try {
        std::size_t used = 0;
        int value = std::stoi(text, &used);   // throws if no digits or number too large
        if (used != text.size()) {            // leftover characters, e.g. "6abc" or "6 7"
            return false;
        }
        result = value;
        return true;
    } catch (const std::invalid_argument&) {
        return false;                         // e.g. "three"
    } catch (const std::out_of_range&) {
        return false;                         // e.g. "99999999999999"
    }
}

int main() {
    int number = 0;
    bool accepted = false;

    std::cout << "Enter an integer value between 5 and 10" << std::endl;

    while (!accepted) {
        std::string line;
        std::getline(std::cin, line);

        if (!std::cin) {                      // input stream closed (Ctrl+D / Ctrl+Z)
            std::cout << "No more input. Exiting." << std::endl;
            return 1;
        }

        if (!tryParseInt(line, number)) {
            // Not an integer at all.
            std::cout << "Sorry, you entered an invalid number, please try again" << std::endl;
        }
        else if (number < 5 || number > 10) {
            // An integer, but outside the allowed range.
            std::cout << "You entered " << number
                      << ". Please enter a number between 5 and 10." << std::endl;
        }
        else {
            accepted = true;                  // valid and in range: the loop will end
        }
    }

    // Runs only after the loop has ended.
    std::cout << "Your input value(" << number << ") has been accepted." << std::endl;
    return 0;
}
