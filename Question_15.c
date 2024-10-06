#include<stdio.h>

int Array_sum( int *p, int size)
{
    int sum = 0, i;

    for (i = 0; i < size; i++)
    {
        sum += *p;
        p++;
    }

    return sum;
}

int main()
{
    int size, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", array + i);
    }

    printf("Sum of all the elements in the given array is: %d\n", Array_sum(array, size));

    return 0;
}