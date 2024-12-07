#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if((num>=10 && num<=99)||(num<=-10 && num>=-99))
    {
        printf("the value %d is a two digit",num);
    }
    else
    {
        printf("the value %d is not a two digit",num);
    }
    return 0;
}