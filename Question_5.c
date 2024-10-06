#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    float larger;

    printf("Enter the 3 numbers (a, b, c): ");
    scanf("%d, %d, %d", &a, &b, &c);

    larger = (float) a > b ? (a > c ? a : c) : (b > c ? b : c);

    if (larger*larger == (a*a + b*b + c*c - larger*larger))
        printf("Given numbers [%d, %d, %d] form a right angled triangle.", a, b, c);
    else
        printf("Given numbers [%d, %d, %d] do not form a righ angled triangle.", a, b, c);
    
    return 0;
}