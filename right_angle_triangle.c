#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("Enter the base of the triangle:");
    scanf("%f",&a);
    printf("Enter the height of the triagle:");
    scanf("%f",&b);
    printf("Enter the hypo of the triagle:");
    scanf("%f",&c);
    if((a*a)+(b*b)==(c*c))
    {
        printf("They are the sides of a right angle triangle");
    }
    else
    printf("They are not the sides of a right angle triangle");
}