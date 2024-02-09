#include <iostream>
#include <cmath>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    
    int sqrtNumber = static_cast<int>(std::sqrt(number));
    for (int i = 2; i <= sqrtNumber; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int userInput;

    // Get input from the user
    std::cout << "Enter an integer: ";
    std::cin >> userInput;

    // Output prime numbers less than or equal to the given number
    std::cout << "Prime numbers less than or equal to " << userInput << " are:" << std::endl;
    for (int i = 2; i <= userInput; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
