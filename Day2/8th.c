#include<stdio.h>
int main()
{
 int num,i;
 int sum;
 printf("enter the number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
    sum=sum+i;
 }
 printf("%d is the summation between 1 to %d",sum,num);
}
