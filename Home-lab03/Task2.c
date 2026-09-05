#include <stdio.h>

int main() {
    int marks = 90;
    float avg = 70.9;
    char student_Name[] = "Zohair Abbas";
    char Gender = 'M';
    long student_ID = 123456;

    printf("Total marks of student: %d\nThe average of three numbers is: %f\nThe name of student is: %s\nThe gender of the student is: %c\nThe student ID is: %ld\n",
           marks, avg, student_Name, Gender, student_ID);

    return 0;
}