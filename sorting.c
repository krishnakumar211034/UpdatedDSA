#include <stdio.h>
int main()
{
    int n;
    int *size;
    size=&n;
    printf("Enter the No of Elements: ");
    scanf("%d",size);
    int *arr;
    printf("Enter the Elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(*(arr+j)<*(arr+min)) min=j;
        }
        if(min!=i)
        {
            int temp=*(arr+i);
            *(arr+i)=*(arr+min);
            *(arr+min)=temp;
        }
    }
    printf("output\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}