#include<stdio.h>

int main()
{
    int u_l, l_l, i, j, prime;

    printf("Enter lower and upper limit (lower, upper): ");
    scanf("%d, %d", &l_l, &u_l);

    printf("Prime numbers from %d to %d are:\n", l_l, u_l);
    for (i = l_l; i <= u_l; i++)
    {
        prime = 1;
        for (j = 2; j <= (i/2); j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
            printf("%d ", i);
    }

    return 0;
}