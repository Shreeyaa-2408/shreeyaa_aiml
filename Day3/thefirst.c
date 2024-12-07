//write a c program to print the numbers from n to 1
#include<stdio.h>
int main()
{
    int num,i;
    printf("entr the number:");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        printf("%d \t",i);
    }
    return 0;
}
