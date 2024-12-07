//to print the quoient and reminder of two numbers using functions
#include<stdio.h>

// Function definition
void div(int num1, int num2) {
    printf("quoient of %d & %d is: %d \n", num1, num2, (num1 / num2));
    printf(" reminder of %d & %d is :%d\n",num1,num2,(num1 % num2));
}

int main() {
    // Function calls
    div(8,2);
    div(9,3);
    return 0;
}