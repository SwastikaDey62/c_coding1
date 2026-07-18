#include <stdio.h>
int main() {
    float balance;
    int withdrawal;
    // Input account balance
    printf("Enter account balance: ");
    scanf("%f", &balance);
    // Input withdrawal amount
    printf("Enter withdrawal amount: ");
    scanf("%d", &withdrawal);
    // Validate withdrawal
    if (withdrawal % 100 != 0) {
        printf("Error: Withdrawal amount must be a multiple of 100.\n");
    } 
    else if (withdrawal > balance) {
        printf("Error: Insufficient account balance.\n");
    } 
    else {
        balance = balance - withdrawal;
        printf("Transaction Successful!\n");
        printf("Updated Balance: %f\n", balance);
    }
    return 0;
}
