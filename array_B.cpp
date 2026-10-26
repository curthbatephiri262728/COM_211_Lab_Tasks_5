#include <iostream>
#include <string>

int main() {
    std::string items[] = {
        "B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"
    };

    // sizeof(whole array) / sizeof(one element) = number of elements.
    int count = sizeof(items) / sizeof(items[0]);

    std::cout << "Elements that start with 'B':" << std::endl;

    for (int i = 0; i < count; i++) {
        // items[i][0] is the first character of the i-th string.
        // The empty() check guards against reading the first character of an empty string.
        if (!items[i].empty() && items[i][0] == 'B') {
            std::cout << items[i] << std::endl;
        }
    }

    return 0;
}
