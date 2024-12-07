// write the c progrm to print the revered multipication of n
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=10;i>=1;i--)
    {
        printf("%d * %d=%d\n",num,i,num*i);
    }
}