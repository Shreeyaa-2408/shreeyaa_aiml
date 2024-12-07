//write a c program to read an integer value as input from uers and check whether it is a multiple of 3 and 5 or not
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if((n%3==0)&&(n%5==0))
    {
        printf("%d is multiple of 3 and 5",n);
    }
    else
    {
        printf("%d is not a multiple of 3 and 5",n);
    }
    return 0;
}