#include <stdio.h>

int main() {
    int n,temp,r,a[10],i=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while (temp!= 0)
    {
        r= temp % 10;
        a[i]= r;
        temp= temp/10;
        i++;
    }
    for (int j= 0; j < (i/2); j++)
    {
        if (a[j]!= a[i-j-1])
        {
            printf ("Not Palindrome \n");
            return 0;
        }
    }
    printf("Palindrome \n");
}
