// program to solve the following equation is s = ut+1/2 at^2 
// author Pushpak Jaiswal
#include <stdio.h>
#include <math.h>
void main()
{
    float s,u,t,a;
    printf("Enter the time taken in seconds.");
    scanf("%f",&t);
    printf("Enter the acceleration of the body.");
    scanf("%f",&a);
    printf("Enter the in initial velocity.");
    scanf("%f",&u);
    s=u*t+(1/2)*a*pow(t,2);
    printf("The displacment of the free falling body is %.2f",s);
}