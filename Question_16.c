#include<stdio.h>

int main()
{
    int size, i, temp;
    int *p;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];
    p = array;

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", array + i);
    }

    printf("Original array entered:\n");
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");

    printf("Reversed array is:\n");
    for (i = 0; i < (size/2); i++)
    {
        temp = *(p + i);
        *(p + i) = *(p + size - 1 -i);
        *(p + size - 1 - i) = temp;
    }
    for(i = 0; i < size; i++)
        printf("%d ", array[i]);

    return 0;
}
