// write a c program to read the mounth number as the input from the user and heck whether it is a valid mounth number or not
#include<stdio.h>
int main()
{
    int mounth;
    printf("enter the mounth number:");
    scanf("%d",&mounth);
    if(mounth<=12 && mounth>=1)
    {
        printf("%d is a valid mounth number ",mounth);
    }
    else
    {
        printf("%d is not a valid mounth number",mounth);
    }
    return 0;
}