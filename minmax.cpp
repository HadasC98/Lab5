#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int arraySize = 10;
    int randomNumbers[arraySize];

    // Seed for random number generation
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate and store random integers between 0 and 100
    for (int i = 0; i < arraySize; ++i) {
        randomNumbers[i] = std::rand() % 101; // Generates a random number between 0 and 100
    }

    // Output the generated array
    std::cout << "Generated random integers: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << randomNumbers[i] << " ";
    }
    std::cout << std::endl;

    // Find and output the minimum and maximum values
    int minValue = randomNumbers[0];
    int maxValue = randomNumbers[0];

    for (int i = 1; i < arraySize; ++i) {
        if (randomNumbers[i] < minValue) {
            minValue = randomNumbers[i];
        }
        if (randomNumbers[i] > maxValue) {
            maxValue = randomNumbers[i];
        }
    }

    std::cout << "Minimum value: " << minValue << std::endl;
    std::cout << "Maximum value: " << maxValue << std::endl;

    return 0;
}
