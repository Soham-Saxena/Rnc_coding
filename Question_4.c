#include<stdio.h>

int main()
{
    int a, b;
    char ope;

    printf("Enter 2 numbers (a, b): ");
    scanf("%d, %d", &a, &b);

    printf("Enter operation (+, -, *, /): ");
    getchar();
    scanf("%c", &ope);

    switch (ope)
    {
        case '+':
        {
            printf("%d + %d = %d\n", a, b, a+b);
            break;
        }
        case '-':
        {
            printf("%d - %d = %d\n", a, b, a-b);
            break;
        }
        case '*':
        {
            printf("%d * %d = %d", a, b, a*b);
            break;
        }
        case '/':
        {
            printf("%d / %d = %f", a, b, (float) a/b);
            break;
        }
        default:
        {
            printf("Invalid operator entered.");
        }
    }

    return 0;
}