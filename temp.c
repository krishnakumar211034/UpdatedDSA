#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[max]<arr[i]) max=i;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                if(arr[k]==arr[max]) count++;
            }
        }
    }
    printf("The Maximum Element of this New Set is %d and it Appears %d times",arr[max],count);
    return 0;
}