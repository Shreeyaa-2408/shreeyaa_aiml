//write a c progrm to print the multipication talbe of n using funtions by taking the dynamic input from the user
#include <stdio.h>
void printMultiplicationTable(int n)
 {
    printf("Multiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++)
     {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() 
{
    int num;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);
    printMultiplicationTable(num);

    return 0;
}

