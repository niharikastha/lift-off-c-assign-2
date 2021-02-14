#include<stdio.h>
void main()
{
    int a[50], size, i, big, small;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("\nEnter the %d elements of the array:\n", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    big = a[0]; 
   
    for(i = 1; i < size; i++)
    {
        if(big < a[i])   
        {
            big = a[i]; 
        }
    }
    printf("\nThe largest element is: %d", big);

    small = a[0];  
       
    for(i = 1; i < size; i++)
    {
        if(small>a[i])  
        {
            small = a[i];   
        }
	}
    printf("\nThe smallest element is: %d", small);
}
   
