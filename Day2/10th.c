//write a c program to print the summation of even and odd numbers from 1 to n
#include<stdio.h>
int main()
{
    int num,i;
    int even_sum=0,odd_sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            even_sum=even_sum+i;
        }
        else
        {
            odd_sum=odd_sum+i;
        }
    }
    printf("evensum=%d \n",even_sum);
    printf("oddsum=%d",odd_sum);

}