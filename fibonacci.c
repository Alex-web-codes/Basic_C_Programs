#include<stdio.h>
void main()
{
    int n;int a,b,i,c,d1,d2;
    printf("Enter the limit:");
    scanf("%d",&n);
    a=0,b=1;
    printf(" %d",a);
    printf(" %d",b);
    for(i=1;i<=n-2;i++)
    { 
        d1=a+b;
        printf(" %d",d1);
        a=b;
        b=d1;

    }
}