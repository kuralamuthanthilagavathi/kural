#include <stdio.h>
 
void main()
{
    int array[50], size, i, big;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    printf("\n Enter %d elements of  the array: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    largest = array[0];
    for (i = 1; i < size; i++)
    {
        if (big < array[i])
            big = array[i];
    }
    printf("\n largest element present in the given array is : %d", largest);
    }
