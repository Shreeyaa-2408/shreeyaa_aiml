#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number:");
    scanf("%d",&num);
    printf("numder from 1 to %d\t",num);
    i=1;
    while(i<=num)
    {
        printf("%d\t ",i);
        i++;
    }
    return 0;
}