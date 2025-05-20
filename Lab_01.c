#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter expression (e.g., 1+2): ");
    scanf("%d%c%d", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d+%d=%d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d-%d=%d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d*%d=%d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d/%d=%d\n", num1, num2, result);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d%%%d=%d\n", num1, num2, result); // %% to print %
            } else {
                printf("Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
