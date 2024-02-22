// this is a program to calculate total salary of an employ
// author Pushpak Jaiswal
#include <stdio.h>
void main()
{
    double base,hra,da,total;
    printf("Enter the basic salary.");
    scanf("%lf",&base);
    hra = (10/base)*100;
    da= (150/base)*100;
    total = base+hra+da;
    printf("The total salary of employ is %lf",total);
}