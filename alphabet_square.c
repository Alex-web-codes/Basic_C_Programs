#include<stdio.h>
void main()
{
    int i,j;int n,m=65,d;char c;
     printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=64;
        for(j=1;j<=n;j++)
        {
            d=m+j;
            c=(char)d;
            printf("%c ",c);
        }
        printf("\n");
    }
}
