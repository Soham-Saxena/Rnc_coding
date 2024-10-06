#include<stdio.h>

int main()
{
    int height, i, j;
    printf("Enter height of pattern: ");
    scanf("%d", &height);

    for (i = 0; i < height; i++){
        for (j = height - 1 - i; j > 0; j--)
            printf(" ");
        for (int k = height - 1 - i; k < height; k++)
            printf("*");
        printf("\n");}
    
    return 0;
}