#include<stdio.h>

int *middle_elem(int *p, int size)
{
    return (p + size/2);
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

    int *p = middle_elem(array, size);
    if (size % 2 != 0)
        printf("Middle element is: %d\n", *p);
    else
        printf("Middle elements are: %d, %d\n", *(p - 1), *p);

    return 0;
}