#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number :");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        if(num==i*i)
        {
            printf("%d is a perfect square",num);
        }
        else
        {
            printf("%d is not a perfect square",num);
        }
    }
    return 0;
}