#include<stdio.h>
void factorial(int n,int *fact)
{
    if(n==0 || n==1)
    {
        *fact=*fact*1;
        return;
    }
    else 
    {
        *fact=n*(*fact);
        factorial(n-1,fact);
        return;
    }
}
int main()
{
    int n,fact=1;
    printf("Enter the Value of N: ");
    scanf("%d",&n);
    factorial(n,&fact);
    printf("%d!=%d",n,fact);
}