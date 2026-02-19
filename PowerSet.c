#include <stdio.h>

void main() {
    int a[3]= {10, 12, 15};
    int b[4]= {2, 3, 1, 8};
    int i, j;
    printf ("The power set of array a:\n");
    printf (" { } \n");
    for (i=0; i < 3; i++)
    {
        printf (" {%d} \n", a[i]);
        for (j= i+1 ; j< 3; j++)
        {
            printf (" {%d, %d}  \n ", a[i],a[j]);
        }
    }
     printf( " {10,12,15} \n ");
    printf ("The power set of array b:\n");
    printf (" { } \n");
    for (i=0; i < 4; i++)
    {
        printf ( " {%d} \n", b[i]);
        for (j=i+1; j < 4; j++)
        {
            printf (" {%d,%d} \n", b[i],b[j]);
            printf (" {%d,%d,%d} \n", b[i],b[j],b [j-1]);
        }
    }
    printf( " {2,3,1,8} \n ");
}
