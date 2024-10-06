#include<stdio.h>

int main()
{
    int marks;

    printf("Enter marks of student: ");
    scanf("%d", &marks);

    if (marks <=  100 && marks > 89)
        printf("Student falls under A category.");
    else if (marks < 90 && marks > 79)
        printf("Student falls under B category.");
    else if (marks < 80 && marks > 69)
        printf("Student falls under C category.");
    else if (marks < 70 && marks > 59)
        printf("Student falls under D categoory.");
    else if (marks < 60 && marks > -1)
        printf("Student falls under F category.");
    else
        printf("Marks out of range.");

    return 0;
}