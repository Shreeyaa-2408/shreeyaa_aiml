// read the input from the user as integer and print or check the candidate is eligible vote or not 
#include<stdio.h>
int main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if((age>=18)&&(age<=100))
    {
        printf("you are eligible to vote");
    }
    else
    {
        printf("you are  not eligible to vote ");
    }
    return 0;
}