#include<stdio.h>
void main()
{
    int n,f=1;int i,sum=0,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
    for(i=1;i<=j;i++)
    {
      f=f*i;
    }
    sum=sum+f;
    }
    printf("sum of the factorials is: %d",sum);
}
