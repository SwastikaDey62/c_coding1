#include <stdio.h>
int main() {
    int principal, time, rate, si;
    printf("Enter principal amount:");
    scanf ("%d", &principal);
    printf("Enter time (in years):");
    scanf ("%d", &time);
    printf("Enter rate of interest:");
    scanf ("%d", &rate);
    si= (principal * time * rate)/ 100;
    printf("Simple Interest = %d\n", si);
    return 0;
}
