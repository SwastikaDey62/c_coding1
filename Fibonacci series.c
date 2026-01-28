#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d %d", a, b);
    for (int i = 3; i <= n; i++) {
        int term = a + b;
        printf(" %d", term);
        a = b;
        b = term;
    }
    return 0;
}
