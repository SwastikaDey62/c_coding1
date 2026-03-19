#include <stdio.h>

void main() {
   for (int i= 0; i<= 4; i++)
   {
       for (int j=0; j<= i; j++)
       {
           if (i % 2 == 0)
           {
               printf ("%d ", 2*j + 1);
           }
           else
           {
               printf ("%d ", 2*j + 2);
           }
       }
       printf ( "\n" );
   }
}
