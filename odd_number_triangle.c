#include<stdio.h>
void main()
{
    int i,j,n,c=1;
     printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",c);
            c=c+2;
        }
        printf("\n");
    }
}
