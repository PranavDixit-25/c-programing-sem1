#include <stdio.h>

double balance = 0.0;

void deposit(double amount) {
    balance += amount;
    printf("Deposited: %.2f\n", amount);
}

void withdraw(double amount) {
    if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance -= amount;
        printf("Withdrawn: %.2f\n", amount);
    }
}

void checkBalance() {
    printf("Current balance: %.2f\n", balance);
}

void displayMenu() {
    printf("\nSimple Banking System\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
}

int main() {
	printf("Devansh sain 590015109");
    int choice;
    double amount;

    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                deposit(amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                withdraw(amount);
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

