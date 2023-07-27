#include <iostream>
#define MAX_STUDENT 100

int main() {
    int marks[MAX_STUDENT][6];
    int numStudents, numSubjects;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;
    std::cout << "Enter the number of subjects: ";
    std::cin >> numSubjects;

    for (int i = 0; i < numStudents; i++) {
        std::cout << "Enter marks of student " << i + 1 << ":\n";
        for (int j = 0; j < numSubjects; j++) {
            std::cout << "Subject " << j + 1 << ": ";
            std::cin >> marks[i][j];
        }
    }

    for (int subject = 0; subject < numSubjects; subject++) {
        int minMark = marks[0][subject];
        int maxMark = marks[0][subject];

        for (int student = 1; student < numStudents; student++) {
            if (marks[student][subject] < minMark)
                minMark = marks[student][subject];

            if (marks[student][subject] > maxMark)
                maxMark = marks[student][subject];
        }

        std::cout << "Subject " << subject + 1 << "\n";
        std::cout << "Lowest mark: " << minMark << "\n";
        std::cout << "Highest mark: " << maxMark << "\n";
    }

    for (int subject = 0; subject < numSubjects; subject++) {
        int sum = 0;

        for (int student = 0; student < numStudents; student++) {
            sum += marks[student][subject];
        }
        float average = static_cast<float>(sum) / numStudents;
        std::cout << "Subject: " << subject + 1 << "\n";
        std::cout << "Average score: " << average << "\n";
    }

    for (int subject = 0; subject < numSubjects; subject++) {
        int count = 0;

        for (int student = 0; student < numStudents; student++) {
            if (marks[student][subject] < 12)
                count++;
        }

        std::cout << "Subject " << subject + 1 << "\n";
        std::cout << "Number of students with a score less than 12: " << count << "\n";
    }

    return 0;
}
