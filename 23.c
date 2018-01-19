#include <stdio.h>
 
void main() 
{
    int array[100], low, size, c, add = 1;
 
    printf("Enter the number of elements in array\n");
    scanf("%d",&size);
 
    printf("Enter %d integers\n", size);
 
    for ( c = 0 ; c < size ; c++ )
        scanf("%d", &array[c]);
 
    low = array[0];
 
    for ( c = 1 ; c < size ; c++ ) 
    {
        if ( array[c] < low ) 
        {
           low = array[c];
           add = c+1;
        }
    } 
 
    printf("Minimum element is present at location %d and it's value is %d.\n", add, low);

}
}
