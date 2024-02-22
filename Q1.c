// program to calculate marks for six subjects if total marks is 100
// author Pushpak Jaiswal
#include <stdio.h>

void main() {
    int math, phy, chem, bio, eng, hindi;
    printf("Enter the marks of math: ");
    scanf("%d", &math);
    printf("Enter the marks of physics: ");
    scanf("%d", &phy);
    printf("Enter the marks of chemistry: ");
    scanf("%d", &chem);
    printf("Enter the marks of biology: ");
    scanf("%d", &bio);
    printf("Enter the marks of english: ");
    scanf("%d", &eng);
    printf("Enter the marks of hindi: ");
    scanf("%d", &hindi);

    int totalMarks = math + phy + chem + bio + eng + hindi;
    float percentage = (totalMarks / 600.0) * 100; // Assuming total marks for 6 subjects is 600

    printf("The percentage of student is %.2f\n", percentage);
}

