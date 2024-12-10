//to read the numbers of notes as input from the user for indian currency dimenions and print the total amount
#include <stdio.h>

// Function to calculate the total amount
int calculateTotalAmount(int denominations[], int counts[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += denominations[i] * counts[i];
    }
    return total;
}

int main() {
    // Array of Indian currency denominations
    int denominations[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int size = sizeof(denominations) / sizeof(denominations[0]);

    // Array to store the number of notes
    int counts[size];

    // Prompt user for the number of notes for each denomination
    printf("Enter the number of notes for the following denominations:\n");
    for (int i = 0; i < size; i++) {
        printf("Number of %d rupee notes: ", denominations[i]);
        scanf("%d", &counts[i]);
    }

    // Calculate total amount
    int totalAmount = calculateTotalAmount(denominations, counts, size);

    // Display the total amount
    printf("\nThe total amount is: %d\n", totalAmount);

    return 0;
}


