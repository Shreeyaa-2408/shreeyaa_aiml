// to print the product of two numbers using functions
#include<stdio.h>

// Function definition
void mul(int num1, int num2) {
    printf("product of %d & %d is: %d \n", num1, num2, (num1 * num2));
}

int main() {
    // Function calls
    mul(8, 3);
    mul(9,4);
    return 0;
}