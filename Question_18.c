#include<stdio.h>

int main()
{
    int size, i, j, temp;
    int *p, *l;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i +1);
        scanf("%d", array + i);
    }

    printf("Array before sorting:\n");
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");

    for (i = 0; i < size; i++)
    {
        p = array + i;
        for (j = i + 1; j < size; j++)
            p = *p < *(array + j) ? array + i : array + j;
        temp = *(array + i);
        *(array + i) = *p;
        *p = temp;
    }

    printf("Array after sorting:\n");
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}