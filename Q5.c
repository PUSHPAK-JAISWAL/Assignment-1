// this is a program to find y=x^5/5
// author Pushpak Jaiswal
#include <stdio.h>
#include <math.h>
void main()
{
    float y,x;
    printf("Enter the value of x.");
    scanf("%f",&x);
    y=pow(x,5)/5;
    printf("The value of the equation is %.2f ",y);
}