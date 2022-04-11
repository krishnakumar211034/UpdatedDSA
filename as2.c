// Krishna Kumar K
// 211IT034
#include<stdio.h>
int main()
{
    int it034_a,it034_b,*it034_p=&it034_a,*it034_q=&it034_b,it034_temp;
    printf("Enter the Value A: ");
    scanf("%d",it034_p);
    printf("Enter the Value B: ");
    scanf("%d",it034_q);
    printf("The Values Befor Swap\nA=%d\nB=%d\n",*it034_p,*it034_q);
    it034_temp=*it034_p;
    *it034_p=*it034_q;
    *it034_q=it034_temp;
    printf("The Values After Swap\nA=%d\nB=%d",*it034_p,*it034_q);
    return 0;
}