#include <stdio.h>

// Function using for loop
unsigned long long factorial_for(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function using while loop
unsigned long long factorial_while(int n) {
    unsigned long long fact = 1;
    int i = 1;
    while (i <= n) {
        fact *= i;
        i++;
    }
    return fact;
}

int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    unsigned long long result_for = factorial_for(number);
    unsigned long long result_while = factorial_while(number);

    printf("Factorial using for loop: %llu\n", result_for);
    printf("Factorial using while loop: %llu\n", result_while);

    if (result_for == result_while)
        printf("Results verified: Both methods give the same result.\n");
    else
        printf("Results mismatch! Please check the code.\n");

    return 0;
}
