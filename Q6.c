// this is program to find the roots of quadratic equations
// author Pushpak Jaiswal
#include <stdio.h>
#include <math.h>
int main() 
{
    double root1, root2, a, b, c;
    printf("Enter values of a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double discriminant = b * b - 4 * a * c; 
    if (discriminant >= 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a); 
        root2 = (-b - sqrt(discriminant)) / (2 * a); 
        printf("Roots are %.2f and %.2f.\n", root1, root2);
    } 
    else 
    {
        printf("Complex roots.\n");
    }
    return 0;
}
