//write a c program to read the integer value as input form the user & check whether the user entered integer is digit or numder
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>=-9 && num<=9)
    {
        printf("the value %d is a digit",num);
    }
    else
    {
        printf("the value %d is a number",num);
    }
    return 0;
}