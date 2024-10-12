#include<stdio.h>
void main()
{
    int n,i,s=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {
     if (i%2==0)
     {
        s=s-i;
     }
     else s=s+i;
    }
    printf("sum of the series is:%d ",s);
}
