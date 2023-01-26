#include <stdio.h>

int main()
{
    double N[100];
    double a = 0, b=0;
     scanf("%lf", &a);
    N[0] = a;
    for(int i=1; i<100; i++) {
        N[i] = N[i-1]/2;
    }
     for(int i=0; i<100; i++) {
        printf("N[%d] = %.4lf\n",i, N[i]);
     }
     }
