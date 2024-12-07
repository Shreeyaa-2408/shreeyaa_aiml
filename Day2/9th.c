// write a c program to print the number of even number and odd numbers present within n
#include<stdio.h>
int main()
{
    int num,i;
    int even_count;
    int odd_count;
    odd_count=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("even count=%d\n",even_count);
    printf("odd count=%d",odd_count);
    }