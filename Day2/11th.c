// to read the integer value as the input from the region to find the count of digits present in that number
#include<stdio.h>
int main()
{
    int num;
    int count=0;
    printf("enter the value of the num");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
        printf("loop executed \n");
    }
    printf("%d is the count of digits \n",count);
    return 0;
}