#include <iostream>

int main() {
    int num1, num2, sum;

    // Ask for input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Add the numbers
    sum = num1 + num2;

    // Output the result
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
