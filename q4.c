#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Size of Array: ");
    scanf("%d",&n);
    printf("Enter the Array Elements: ");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
   return 0;
}