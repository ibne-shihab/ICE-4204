#include <stdio.h>

int main() {
    int pin, enteredPin, choice;
    float balance = 1000.0, deposit, withdraw;

    pin = 5656; // default PIN

    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access Denied.\n");
        return 0;
    }

    do {
        printf("\n----- ATM MENU -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                if (deposit <= 0)
                    printf("Invalid deposit amount.\n");
                else {
                    balance += deposit;
                    printf("Deposited successfully.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);
                if (withdraw <= 0 || withdraw > balance)
                    printf("Invalid or insufficient funds.\n");
                else {
                    balance -= withdraw;
                    printf("Withdrawal successful.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
