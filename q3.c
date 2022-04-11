#include<stdio.h>
int max(int *p,int *q)
{
    if(*p>*q) return *p;
    else return *q;
}
int main()
{
    int a,b,*p,*q,sum;
    printf("Enter the Value of A and B: ");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    printf("Maximum Number Among %d and %d is %d",a,b,max(&a,&b));
}