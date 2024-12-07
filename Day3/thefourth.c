// write a c program to read the in put from the user andto print the numder of notes required win indian currency dimension
#include <stdio.h>
int main() 
{
    int amt;
    printf("Input the amount: ");
    scanf("%d",&amt);
    // logic to find the numbers of notes required
    printf("2000---------->%d\n",amt/2000);
    amt=amt%2000;
    printf("500---------->%d\n",amt/500);
    amt=amt%500;
    printf("200---------->%d\n",amt/200);
    amt=amt%200;
    printf("100---------->%d\n",amt/100);
    amt=amt%100;
    printf("50---------->%d\n",amt/50);
    amt=amt%50;
    printf("20---------->%d\n",amt/20);
    amt=amt%20;
    printf("10---------->%d\n",amt/10);
    amt=amt%10;
    printf("5---------->%d\n",amt/5);
    amt=amt%5;
    printf("2---------->%d\n",amt/2);
    amt=amt%2;
    printf("1---------->%d\n",amt/1);
    return 0;
}

    