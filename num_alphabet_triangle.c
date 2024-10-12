#include<stdio.h>
void main()
{
    int i,n,j,d;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m=64;
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
             d=m+j;
             char c=(char)d;
             printf("%c ",c);
            }
            else
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}