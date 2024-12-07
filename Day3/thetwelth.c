// to subtract two numbers using functions
#include<stdio.h>

// Function definition
void sub(int num1, int num2) {
    printf("substraction of %d & %d is: %d \n", num1, num2, (num1 - num2));
}

int main() {
    // Function calls
    sub(8, 3);
    sub(5, 4);
    return 0;
}

