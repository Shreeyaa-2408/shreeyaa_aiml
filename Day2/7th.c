// write a c program to print the square values from 1 to n
#include<stdio.h>
int main()
{
 int num,i;
 printf("enter the number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
    printf("%d\n",i*i);
 }
}
