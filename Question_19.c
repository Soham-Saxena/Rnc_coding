#include<stdio.h>

float average(int *p, int size)
{
    int i;
    float sum;
    for (i = 0; i < size; i++)
        sum += *(p + i);

    return (sum/size);
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

    printf("Average of all the elements in the array is: %f\n", average(array, size));

    return 0;
}