// to print the multiplicatoin tables from one to n

#include<stdio.h>
int main()
{
    int n1,n2,i;
    printf("enter the numbers:");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        printf("%d * %d = %d\n",i,n2,n2*i);
    }
}