#include<stdio.h>
#define MAX_STUDENT 100
int main() {
    int marks [MAX_STUDENT][6];
    int numStudents, numSubjects;
    printf("Enter the number of students : ");
    scanf("%d",&numStudents);
    printf("Enter no of subjects : ");
    scanf("%d",&numSubjects);
    for(int i = 0; i < numStudents; i++) {
        printf("Enter marks of student%d :\n", i+1);
        for(int j = 0; j < numSubjects; j++) {
            printf("Subject%d : ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for(int subject = 0; subject < numStudents; subject++) {
        int minMark = marks[0][subject];
        int maxMark = marks[0][subject];
        
        for(int student = 1; student < numStudents; student++) {
            if(marks[student][subject] < minMark)
            minMark = marks[student][subject];
            
            if(marks[student][subject] > maxMark)
            maxMark = marks[student][subject];
            
        }
        
        printf("Subject%d\n", subject + 1);
        printf("Lowest mark : %d\n",minMark);
        printf("Highest mark: %d\n",maxMark);
    }
    
    for(int subject = 0; subject < numSubjects; subject++) {
        int sum = 0;
        
        for(int student = 0; student < numStudents; student++){
            sum = sum + marks[student][subject];
        }
        float average = sum / numStudents;
        printf("Subject: %d \n", subject + 1);
        printf("Average score: %f\n", average);
    }
    
    for(int subject = 0; subject < numSubjects; subject++) {
        int count = 0;
        
        for(int student = 0; student < numStudents; student++){
            if(marks[student][subject] < 12)
            count++;
        }
        
        printf("Subject%d\n", subject + 1);
        printf("Number of student with score less than 12: %d\n", count);
    }
    
    return 0;
        
}