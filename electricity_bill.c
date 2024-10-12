#include<stdio.h>
void main()
{
    char name[50];float unit;float total;
    printf("enter the name:");
    scanf("%[^\n]",&name);
    printf("Enter the units:");
    scanf("%f",&unit);
    float rate,amount,surcharge;
    if(unit<=200)
    {
        rate=unit*0.80;
    }
    else if(unit<=300)
    {
        rate=(200*0.80)+(unit-200)*0.90;
    }
    else
    rate=(200*0.80)+(100*0.90)+(unit-300)*1;
    total=rate+100;
    if(total>400)
    {
        surcharge=(15/100.0)*total;
    }
    else
    surcharge=0;
    amount=surcharge+total;
    printf("The name of the user is: %s",name);
    printf("\nThe amount to be paid: %f",amount);



}