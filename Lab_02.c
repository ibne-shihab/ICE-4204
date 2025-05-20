#include <stdio.h>

int main() {
    int numbers[100], count = 0;
    char input[1000];
    char op;

    printf("Enter even number of integers followed by an operator (e.g., 4 5 7 8 +):\n");

    // Read whole line of input
    fgets(input, sizeof(input), stdin);

    // Scan integers and the operator
    int i = 0, offset = 0;
    while (sscanf(input + offset, "%d%n", &numbers[count], &i) == 1) {
        count++;
        offset += i;
    }

    // Scan operator after all numbers
    sscanf(input + offset, " %c", &op);

    if (count % 2 != 0) {
        printf("Please enter an even number of integers.\n");
        return 1;
    }

    printf("Output:\n");
    int j =0;
    for (j; j < count; j += 2) {
        int a = numbers[j];
        int b = numbers[j + 1];
        switch (op) {
            case '+': printf("%d ", a + b); break;
            case '-': printf("%d ", a - b); break;
            case '*': printf("%d ", a * b); break;
            case '/': b != 0 ? printf("%d ", a / b) : printf("NaN "); break;
            case '%': b != 0 ? printf("%d ", a % b) : printf("NaN "); break;
            default: printf("Invalid operator\n"); return 1;
        }
    }

    printf("\n");
    return 0;
}
