// write a c program to print the multipcation table of n
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number:");
    scanf("%d",%num);
    for(i=1;i=10;i++)
    {
        printf("%d * %d=%d",num,i,num*i);
    }
}