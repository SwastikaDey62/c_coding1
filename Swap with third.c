include <stdio.h>

int main() {
    int a=2,b=5,temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping:");
    printf("a= %d,b= %d", a,b);
    

    return 0;
}
