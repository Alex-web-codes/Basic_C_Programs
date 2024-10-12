#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;double d,e,f,g,h;
    printf("Enter the coefficient of x^2: ");
    scanf("%f",&a);
    printf("Enter the coefficient of x: ");
    scanf("%f",&b);
    printf("Enter the coefficient of c: ");
    scanf("%f",&c);
    if((b*b)-(4*a*c)>0)
    {
    d=(-b+sqrt((b*b)-(4*a*c)))/2*a;
     e=(-b-sqrt((b*b)-(4*a*c)))/2*a;
     printf("The roots are :%lf : %lf",d,e);
    }
    else {
        printf("Imaginary roots ");
    }

}