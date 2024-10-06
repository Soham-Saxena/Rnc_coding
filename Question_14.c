#include<stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter 2 numbers (a, b): ");
    scanf("%d, %d", &a, &b);

    int *p1 = &a, *p2 = &b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("Swapped variable: %d, %d\n", a, b); 

    return 0;
}