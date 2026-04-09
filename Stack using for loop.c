#include <stdio.h>

int a[10]= { };
int top= -1;
void push (int val)
{
    if (top< (10-1))
    {
    top++;
    a[top]= val;
} 
else
{ 
    printf ("Stack is full"); 
    
} 
} 
void pop()
{ 
    if (top >= 0)
    {
        printf ("%d ", a[top]); 
        top--; 
        
    } 
    else
{
    printf ("Stack is empty");
}
}
void main()
{
    int n, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &val);
        push(val);
    }
    printf("Elements:\n");
    for (int i = 0; i < n; i++)
    {
        pop();
    }
}
