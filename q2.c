#include<stdio.h>
int add(int *p,int *q)
{
    return ((*p)+(*q));
}
int main()
{
    int a,b,*p,*q,sum;
    printf("Enter the Value of A and B: ");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    sum=add(&a,&b);
    printf("%d + %d = %d",a,b,sum);
}