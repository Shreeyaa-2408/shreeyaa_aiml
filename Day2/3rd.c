//write a c program to read the integer as input from the user and print the odd numbers from one to hunderd
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i % 2!=0)
        printf("%d\t ",i);
    }
    return 0;
}