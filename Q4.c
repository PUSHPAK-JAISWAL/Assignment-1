// program to calculate simple interest 
// author Pushpak Jaiswal
#include <stdio.h>
void main()
{
    float SI,P,r,t;
    printf("Enter the Amount needed.");
    scanf("%f",&P);
    printf("Enter the rate of interest.");
    scanf("%f",&r);
    printf("Enter the required amount of time for repayment. (in years)");
    scanf("%f",&t);
    SI=(P*r*t)/100;
    printf("The Simple interest for the given information is %.2f",SI);
}