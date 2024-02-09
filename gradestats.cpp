#include <iostream>

int main() {
    const int maxGrades = 100;
    int grades[maxGrades];
    int grade, count = 0;
    double sum = 0.0;

    // Input loop
    std::cout << "Enter grades (enter -1 to finish):" << std::endl;
    do {
        std::cout << "Enter grade: ";
        std::cin >> grade;

        // Check if the entered grade is not -1 before storing it
        if (grade != -1) {
            if (count < maxGrades) {
                grades[count] = grade;
                sum += grade;
                count++;
            } else {
                std::cout << "Maximum number of grades reached." << std::endl;
                break;
            }
        }
    } while (grade != -1);

    // Calculate and output the average
    if (count > 0) {
        double average = sum / count;
        std::cout << "The average of the grades is: " << average << std::endl;
    } else {
        std::cout << "No grades entered." << std::endl;
    }

    return 0;
}
