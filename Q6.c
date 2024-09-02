/*Create a structure for student data base with following
members (Register number, Name, Age, CGPA). Write a C
program to perform the following operations (i) Get user
input for 5 students record (ii) Find the student’s name
with greatest CGPA.
(Note: Find appropriate data structure and develop a C program).*/


#include <stdio.h>
#include <string.h>

// Define the student structure
struct Student {
    int regNumber;
    char name[50];
    int age;
    float cgpa;
};

int main() {
    int numStudents = 5;
    struct Student students[numStudents];

    // Get input for each student
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Register Number: ");
        scanf("%d", &students[i].regNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }

    // Find the student with the highest CGPA
    float maxCgpa = students[0].cgpa;
    int maxIndex = 0;
    for (int i = 1; i < numStudents; i++) {
        if (students[i].cgpa > maxCgpa) {
            maxCgpa = students[i].cgpa;
            maxIndex = i;
        }
    }

    // Display the student with the highest CGPA
    printf("\nStudent with highest CGPA:\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("CGPA: %.2f\n", students[maxIndex].cgpa);

    return 0;
}
