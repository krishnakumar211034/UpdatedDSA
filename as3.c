// Krishna Kumar K
// 211IT034
#include<stdio.h>
#define pi 3.14
int main()
{
    float it034_radius,it034_area,it034_circumference,*it034_r=&it034_radius;
    printf("Enter The Radius Of Circle: ");
    scanf("%f",it034_r);
    it034_area=pi*(*it034_r)*(*it034_r);
    it034_circumference=2*pi*(*it034_r);
    printf("Area Of Circle with Radius %0.2f is %0.2f",*it034_r,it034_area);
    printf("Circumference Of Circle with Radius %0.2f is %0.2f",*it034_r,it034_circumference);
    return 0;
}