#include <iostream>
#include <cmath>

int main() {
    int choice;
    double num1, num2;

    std::cout << "Scientific Calculator" << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "1. Square root" << std::endl;
    std::cout << "2. Power" << std::endl;
    std::cout << "3. Sine" << std::endl;
    std::cout << "4. Cosine" << std::endl;
    std::cout << "5. Tangent" << std::endl;

    std::cout << "Enter your choice (1-5): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Enter a number: ";
            std::cin >> num1;
            std::cout << "Square root of " << num1 << " is " << sqrt(num1) << std::endl;
            break;

        case 2:
            std::cout << "Enter the base number: ";
            std::cin >> num1;
            std::cout << "Enter the exponent: ";
            std::cin >> num2;
            std::cout << num1 << " raised to the power of " << num2 << " is " << pow(num1, num2) << std::endl;
            break;

        case 3:
            std::cout << "Enter an angle in degrees: ";
            std::cin >> num1;
            std::cout << "Sine of " << num1 << " degrees is " << sin(num1 * 3.14159 / 180) << std::endl;
            break;

        case 4:
            std::cout << "Enter an angle in degrees: ";
            std::cin >> num1;
            std::cout << "Cosine of " << num1 << " degrees is " << cos(num1 * 3.14159 / 180) << std::endl;
            break;

        case 5:
            std::cout << "Enter an angle in degrees: ";
            std::cin >> num1;
            std::cout << "Tangent of " << num1 << " degrees is " << tan(num1 * 3.14159 / 180) << std::endl;
            break;

        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
    }

    return 0;
}
