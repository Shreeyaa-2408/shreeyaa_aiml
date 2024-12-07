#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter the value of n1,n2:");
    scanf("%d %d",&n1,&n2);
    if(n1==n2)
    {
        printf("the numbers %d %d are equal",n1,n2);
    }
    else
    {
        printf("the numbers %d %d are not equal",n1,n2);
    }
    return 0;
}