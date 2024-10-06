#include<stdio.h>

int main()
{
    int order, i, j;

    printf("Enter order of matrix to input: ");
    scanf("%d", &order);

    int matrix[order][order];

    printf("Filling matrix:\n");
    for (i = 0; i < order; i++)
    {
        printf("Filling row %d\n", i+1);
        for (j = 0; j < order; j++)
        {
            printf("Filling element %d: ", j+1);
            scanf("%d", &matrix[i][j]);
        }
        printf("------------------------\n");
    }

    printf("Given matrix:\n");
    for (i = 0; i < order; i++)
    {
        for (j = 0; j < order; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    for (i = 0; i < order; i++)
    {
        for (j = 0; j < order; j++)
            if (matrix[i][j] != matrix[j][i])
            {
                printf("Is not a symmetrix matrix.\n");
                exit(0);
            }
    }
    printf("Is a symmetric maxtrix,\n");

    return 0;
}