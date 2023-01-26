#include <stdio.h>

int main()
{
    int a, N;
    scanf("%d", &N);
    if(N%2==0) {
        for(int i=0; i<6; i++) {
           printf("%d\n", N+1);
        N = N + 2;
        }
    }else{
        for(int i=0; i<6; i++) {
           printf("%d\n", N+2);
        N = N +2;
    }
    }

}
