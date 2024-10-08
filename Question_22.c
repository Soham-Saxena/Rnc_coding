#include<stdio.h>

int Row_Add(int*, int);
int Column_Add(int*, int);
void Transpose(int*, int, int, int*);

int main()
{
    int column, row, i, j;
    char choice;

    printf("Enter dimensions of matrix (row, column): ");
    scanf("%d, %d", &row, &column);

    int matrix[row][column], t_matrix[column][row];

    for (i = 0; i < row; i++)
    {
        printf("Filling row %d: \n", i + 1);
        for (j = 0; j < column; j++)
        {
            printf("Enter element %d: ", j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter operations to perform to matrix:\nSum of rows(r)\nSum of columns(c)\nTranspose of a matrix(T)\nEnter choice: ");
    getchar();
    scanf("%c", &choice);

    switch (choice)
    {
        case 'r':
            for (i = 0; i < row; i++)
            {
                printf("Sum of row %d: %d\n", i+1, Row_Add(&matrix[i][0], row));
            }
            break;
        case 'c':
            for (i = 0; i < row; i++)
            {
                printf("Sum of column %d: %d\n", i+1, Column_Add(&matrix[0][i], column));
            }
            break;
        case 't':
            printf("Original matrix:\n");
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < column; j++)
                    printf("%d ", matrix[i][j]);
                printf("\n");
            }
            printf("------------------------\n");
            Transpose(&matrix[0][0], column, row, &t_matrix[0][0]);
            printf("Matrix after transposing is:\n");
            for (i = 0; i < column; i++)
            {
                for (j = 0; j < row; j++){
                    printf("%d ", t_matrix[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Input not recognized.");
        
    return 0;
    }
}

int Row_Add(int* p, int c_size)
{
    int i, sum = 0;
    for (i = 0; i < c_size; i++)
    {
        sum += *(p + i);
    }
    return sum;
}

int Column_Add (int *p, int r_size)
{
    int i, sum = 0;
    for (i = 0; i < r_size; i++)
    {
        sum += *(p + r_size*i);
    }
    return sum;
}

void Transpose (int *p, int c_size, int r_size, int *q)
{
    int i, j, temp;
    for (i = 0; i < c_size; i++)
    {
        for (j = 0; j < r_size; j++)
            *(q + j + i*c_size) = *(p + j*c_size + i);
    }
}