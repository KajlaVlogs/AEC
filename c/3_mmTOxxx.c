#include <stdio.h>
#include <string.h>

// Function to convert month number to month name
const char* getMonthName(int month) {
    const char* months[] = {"", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    return months[month];
}

// Function to convert "dd-mm-yyyy" to "dd-xxx-yyyy"
void convertToMonthName(char *date) {
    int day, month, year;
    char monthName[4];
    
    sscanf(date, "%d-%d-%d", &day, &month, &year);
    strcpy(monthName, getMonthName(month));
    
    sprintf(date, "%d-%s-%d", day, monthName, year);
}

// Function to convert month name to month number
int getMonthNumber(const char* monthName) {
    const char* months[] = {"", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    for (int i = 1; i <= 12; i++) {
        if (strcmp(months[i], monthName) == 0) {
            return i;
        }
    }
    return 0; // Invalid month name
}

// Function to convert "dd-xxx-yyyy" to "dd-mm-yyyy"
void convertToMonthNumber(char *date) {
    int day, year;
    char monthName[4];
    
    sscanf(date, "%d-%3s-%d", &day, monthName, &year);
    int month = getMonthNumber(monthName);
    
    sprintf(date, "%d-%02d-%d", day, month, year);
}

int main() {
    char date[12];
    int choice;
    
    printf("Choose conversion:\n");
    printf("1. dd-mm-yyyy to dd-xxx-yyyy\n");
    printf("2. dd-xxx-yyyy to dd-mm-yyyy\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter date in dd-mm-yyyy format: ");
            scanf("%s", date);
            convertToMonthName(date);
            break;
            
        case 2:
            printf("Enter date in dd-xxx-yyyy format: ");
            scanf("%s", date);
            convertToMonthNumber(date);
            break;
            
        default:
            printf("Invalid choice!\n");
            return 1;
    }
    
    printf("Converted date: %s\n", date);
    return 0;
}