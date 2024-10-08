#include<stdio.h>

int average(int*, int);

int main()
{
    int row, column, i, j;

    printf("Enter number of students: ");
    scanf("%d", &row);
    printf("Enter number of subjects: ");
    scanf("%d", &column);

    int matrix[row][column];

    for (i = 0; i < row; i++)
    {
        printf("Entering student %d grades:\n", i+1);
        for (j = 0; j < column; j++)
        {
            printf("Enter grade %d: ", j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Calculating averages:\n");
    for (i = 0; i < row; i++)
    {
        printf("Student %d details:\t", i+1);
        for (j = 0; j < column; j++)
            printf("%d ", matrix[i][j]);
        printf("\tAverage: %d", average(&matrix[i][0], column));
        printf("\n");
    }

    return 0;
}

int average(int *p,int c_size)
{
    int average = 0, i, j;
    for (i = 0; i < c_size; i++)
        average += *(p + i);
    return (average/c_size);
}