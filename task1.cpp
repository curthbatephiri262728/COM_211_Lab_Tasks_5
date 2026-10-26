#include <iostream>
#include <random>

int main() {
    // Set up a random number generator seeded from the hardware.
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 11);   // inclusive range 0..11

    int daysUntilExpiration = dist(gen);

    // Separate if statements for the two "exact value" cases.
    if (daysUntilExpiration == 0) {
        std::cout << "Your subscription has expired." << std::endl;
    }

    if (daysUntilExpiration == 1) {
        std::cout << "Your subscription expires within a day!" << std::endl;
        std::cout << "Renew now and save 20%!" << std::endl;
    }

    // An if / else-if chain for the remaining ranges (2 days and above).
    if (daysUntilExpiration >= 2 && daysUntilExpiration <= 5) {
        std::cout << "Your subscription expires in " << daysUntilExpiration
                  << " days" << std::endl;
        std::cout << "Renew now and save 10%!" << std::endl;
    }
    else if (daysUntilExpiration >= 6 && daysUntilExpiration <= 10) {
        std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
    }
    else if (daysUntilExpiration > 10) {
        std::cout << "You have an active subscription." << std::endl;
    }

    return 0;
}
