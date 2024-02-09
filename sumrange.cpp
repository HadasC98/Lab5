#include <iostream>

int main() {
    // Declare variables to store user input
    int firstNumber, secondNumber;

    // Get input from the user
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;

    // Calculate and display the sum
    int sum = 0;
    for (int i = firstNumber; i <= secondNumber; ++i) {
        sum += i;
    }

    std::cout << "The sum from " << firstNumber << " to " << secondNumber << " is: " << sum << std::endl;

    return 0;
}

