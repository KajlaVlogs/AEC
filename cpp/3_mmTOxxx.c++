#include <iostream>
#include <cstring>
#include <string>

// Function to convert month number to month name
const std::string getMonthName(int month) {
    const std::string months[] = {"", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    return months[month];
}

// Function to convert "dd-mm-yyyy" to "dd-xxx-yyyy"
void convertToMonthName(std::string& date) {
    int day, month, year;
    std::string monthName;
    
    sscanf(date.c_str(), "%d-%d-%d", &day, &month, &year);
    monthName = getMonthName(month);
    
    date = std::to_string(day) + "-" + monthName + "-" + std::to_string(year);
}

// Function to convert month name to month number
int getMonthNumber(const std::string& monthName) {
    const std::string months[] = {"", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    for (int i = 1; i <= 12; i++) {
        if (months[i] == monthName) {
            return i;
        }
    }
    return 0; // Invalid month name
}

// Function to convert "dd-xxx-yyyy" to "dd-mm-yyyy"
void convertToMonthNumber(std::string& date) {
    int day, year;
    std::string monthName;
    
    sscanf(date.c_str(), "%d-%3s-%d", &day, monthName.c_str(), &year);
    int month = getMonthNumber(monthName);
    
    date = std::to_string(day) + "-" + (month < 10 ? "0" : "") + std::to_string(month) + "-" + std::to_string(year);
}

int main() {
    std::string date;
    int choice;
    
    std::cout << "Choose conversion:" << std::endl;
    std::cout << "1. dd-mm-yyyy to dd-xxx-yyyy" << std::endl;
    std::cout << "2. dd-xxx-yyyy to dd-mm-yyyy" << std::endl;
    std::cin >> choice;
    
    switch (choice) {
        case 1:
            std::cout << "Enter date in dd-mm-yyyy format: ";
            std::cin >> date;
            convertToMonthName(date);
            break;
            
        case 2:
            std::cout << "Enter date in dd-xxx-yyyy format: ";
            std::cin >> date;
            convertToMonthNumber(date);
            break;
            
        default:
            std::cout << "Invalid choice!" << std::endl;
            return 1;
    }
    
    std::cout << "Converted date: " << date << std::endl;
    return 0;
}
