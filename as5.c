// Write a program to display the greatest of N numbers –use malloc() function
// Krishna Kumar K
// 211IT034
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *it034_ptr,it034_n;
    printf("Enter number of elements: ");
    scanf("%d",&it034_n);
    it034_ptr = (int *)malloc(it034_n*sizeof(int));
    printf("Enter the elements: ");
    for(int i=0;i<it034_n;i++)
    {
        scanf("%d",it034_ptr+i);
    }
    int it034_Greatest=*(it034_ptr+0);
    for(int i=0;i<it034_n;i++)
    {
        if(*(it034_ptr+i)>it034_Greatest) it034_Greatest=*(it034_ptr+i);
    }
    printf("%d is the Greatest Among all.",it034_Greatest);
}
