#include<stdio.h>

int search(int element, int array[], int size)
{
    int i, index = -1;
    for (i = 0; i < size; i++)
    {
        if (element == array[i])
        {
            index = i;
            break;
        }
    }

    return index;
}


int main()
{
    int size1, size2, i, j, min, max;

    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    min = size1 < size2 ? size1 : size2;
    max = size1 > size2 ? size1 : size2;

    int s_array[min], l_array[max], Union[max + min], Intersection[min];

    printf("Filling smaller array:\n");
    for (i = 0; i < min; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &s_array[i]);
    }
    printf("Filling larger array:\n");
    for (i = 0; i < max; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &l_array[i]);
        Union[i] = l_array[i];
    }
    size1 = max - 1;
    size2 = 0;

    for (i = 0; i < min; i++)
    {
        if (search(s_array[i], Union, size1) == -1)
        {
            size1++;
            Union[size1] = s_array[i];
        }
        if (search(s_array[i], l_array, max) != -1)
        {
            Intersection[size2] = s_array[i];
            size2++;
        }
    }

    printf("Smaller array is:\n");
    for (i = 0; i < min; i++)
        printf("%d ", s_array[i]);
    printf("\n");
    printf("Larger array is:\n");
    for (i = 0; i < max; i++)
        printf("%d ", l_array[i]);
    printf("\n\n");

    printf("Union of the two arrays: \n");
    for (i = 0; i <= size1; i++)
        printf("%d ", Union[i]);
    printf("\n");
    printf("Intersection of the two arrays: \n");
    for (i = 0; i < size2; i++)
        printf("%d ", Intersection[i]);
    printf("\n");
    
    return 0;
}