#include<stdio.h>
#include<math.h>
void main()
{
    int a,b;int y=1;int i;
    printf("Enter 2 nos:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        y=y*a;
    }
    printf("ans: %d",y);

}