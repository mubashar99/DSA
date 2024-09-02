/*In a classroom, the teacher wants to create a list of students who
have submitted their assignments. As students submit their work,
the teacher needs to add each student&#39;s name to the list in the
order of submission. Help the teacher by guiding them on how to
use a proper data structure to insert each student&#39;s name into the
list as they submit their assignment. Write a C program that uses
an array to manage the list and demonstrates how to insert new
student names into the array.*/


#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100 // Maximum number of students (adjust as needed)

struct Student {
    char name[50]; // Assume student names are at most 49 characters long
};

int main() {
    struct Student studentList[MAX_STUDENTS];
    int numStudents = 0; // Initially, no students have submitted

    // Example: Adding student names (you can modify this part)
    strcpy(studentList[numStudents].name, "Alice");
    numStudents++;

    strcpy(studentList[numStudents].name, "Bob");
    numStudents++;

    // Display the list of submitted student names
    printf("List of submitted student names:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%d. %s\n", i + 1, studentList[i].name);
    }

    return 0;
}
