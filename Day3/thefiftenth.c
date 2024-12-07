#include <stdio.h>

void calculate(int x, int y) {
    printf("Summation: %d\n", x + y);
    printf("Difference: %d\n", x - y);
    printf("Product: %d\n", x * y);
    if (y != 0) {
        printf("Quotient: %.2f\n", (float)x / y);
    } else {
        printf("Division by zero is not allowed.\n");
    }
}

int main() {
    int num1, num2;
    printf("Enter the numbers: ");
    scanf("%d %d", &num1, &num2);

    calculate(num1, num2);

    return 0;
}
