#include <iostream>
#include <vector>

// Function to calculate CGPA
double calculateCGPA(const std::vector<double>& grades) {
    double totalCredits = 0.0;
    double gradePoints = 0.0;

    for (const auto& grade : grades) {
        totalCredits += grade;
        gradePoints += grade * 4.0;
    }

    return gradePoints / totalCredits;
}

int main() {
    int numSubjects;
    std::cout << "Enter the number of subjects: ";
    std::cin >> numSubjects;

    std::vector<double> subjectGrades;
    double grade;
    for (int i = 0; i < numSubjects; i++) {
        std::cout << "Enter the grade for subject " << i + 1 << ": ";
        std::cin >> grade;
        subjectGrades.push_back(grade);
    }

    double cgpa = calculateCGPA(subjectGrades);

    std::cout << "CGPA: " << cgpa << std::endl;

    return 0;
}
