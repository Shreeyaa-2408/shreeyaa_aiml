#include<stdio.h>

// Function definition
void Add(int num1, int num2) {
    printf("Addition of %d & %d is: %d \n", num1, num2, (num1 + num2));
}

int main() {
    // Function calls
    Add(8, 3);
    Add(5, 4);
    return 0;
}

