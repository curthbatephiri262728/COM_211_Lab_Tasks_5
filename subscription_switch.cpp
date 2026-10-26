#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 11);

    int daysUntilExpiration = dist(gen);

    switch (daysUntilExpiration) {
        case 0:
            std::cout << "Your subscription has expired." << std::endl;
            break;

        case 1:
            std::cout << "Your subscription expires within a day!" << std::endl;
            std::cout << "Renew now and save 20%!" << std::endl;
            break;

        // Cases 2 to 5 share the same code: the labels "fall through" to it.
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout << "Your subscription expires in " << daysUntilExpiration
                      << " days" << std::endl;
            std::cout << "Renew now and save 10%!" << std::endl;
            break;

        // Cases 6 to 10 share the "expire soon" message.
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
            break;

        // Anything else (only 11 can reach here) is an active subscription.
        default:
            std::cout << "You have an active subscription." << std::endl;
            break;
    }

    return 0;
}
