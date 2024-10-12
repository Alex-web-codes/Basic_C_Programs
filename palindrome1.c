#include<stdio.h>
void main()
{
    int n,a,d,r;
    printf("enter:");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        d=a%10;
        r=r*10+d;
        a=a/10;
    }
    if(r==n)
    printf("palin is: %d",r);
    else printf("not: %d",r);
}