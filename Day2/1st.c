// write a c program to read the input for num as integer and print the numders from 1 to num
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the value of num:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d\t ",i);
    }
    return 0;
}
