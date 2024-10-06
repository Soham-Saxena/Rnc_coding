#include<stdio.h>

int main()
{
    int size, i, j, temp, min;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Entered array is:\n");
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
    for (i = 0; i < size; i++)
    {   
        min = i;
        for (j = i + 1; j < size; j++)
        {
            min = array[min] < array[j] ? min : j; 
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }

    printf("Sorted array is:\n");
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n\n");

    printf("Maximum element in the array is: %d\n", array[size-1]);
    printf("Minimum element in the array is: %d\n", array[0]);

    return 0;
}