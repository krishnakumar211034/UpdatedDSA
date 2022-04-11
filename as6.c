// Krishna Kumar K
// 211IT034
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int min(int a,int b)
{
    return a<b?a:b;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int length(char *arr)
{
    int i=0;
    while(*(arr+i)!='\0')
    { i++; }
    return i;
}
bool stringcompare(char *brr,char *crr)
{
    int i;
    int it034_n=min(length(brr),length(crr));
    for(i=0;i<it034_n;i++)
    {
        int it034_Min=(int)(*(brr+i));
        int j=(int)(*(crr+i));
        it034_Min=it034_Min>96?(it034_Min-32):(it034_Min);
        j=j>96?(j-32):(j);
        if(it034_Min>j) return true;
        else if(it034_Min<j) return false;
    }
    if(*(brr+i)!='\0') return true;
    else return false;
}
void swap(char *arr,char *brr)
{
    int it034_n=max(length(arr),length(brr));
    int i=0;
    while(i<=it034_n)
    {
        char it034_temp=*(arr+i);
        *(arr+i)=*(brr+i);
        *(brr+i)=it034_temp;
        i++;
    }
}
void main()
{
    int it034_n;
    printf("Enter number of Alphabets: ");
    scanf("%d",&it034_n);
    char **arr;
    arr=(char **)malloc(sizeof(char *)*it034_n);
    printf("Enter the Names: \n");
    for(int i=0;i<it034_n;i++)
    {
        arr[i]=(char *)malloc(sizeof(char)*100);
        scanf("%s",arr[i]);
    }
    for(int i=0;i<(it034_n-1);i++)
    {
        int it034_min=i;
        for(int j=i+1;j<it034_n;j++)
        {
            if(stringcompare(*(arr+it034_min),*(arr+j))) it034_min=j;
        }
        if(it034_min!=i) swap(*(arr+i),*(arr+it034_min));
    }
    for(int i=0;i<it034_n;i++)
    {
        printf("%s ",*(arr+i));
    }
}
