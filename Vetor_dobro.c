#include <stdio.h>

int main()
{
    int N[10];
    int a = 0;
     scanf("%d", &a);
     N[0] = a;
     for(int i=1;i<10;i++) {
        N[i]=2*N[i-1];
        
    }
    for(int i=0;i<10;i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
}
