// to print the even numbers from n to 1
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}