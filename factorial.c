#include<stdio.h>
void main()
{
    int n,f=1;int i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      f=f*i;
    }
    printf("factorial is:%d",f);
}