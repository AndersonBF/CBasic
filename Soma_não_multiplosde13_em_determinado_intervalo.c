#include <stdio.h>

int main()
{
    int a=0,b=0,c=0, i;
    scanf("%d %d", &a, &b);
    if(a>b) {
        for(i=a; i<=b; i++) {
        if(i%13!=0){
           c = c + i;
       }
    }
    }
    if(b<a) {
        for(i=b; i<=a; i++) {
        if(i%13!=0){
           c = c + i;
       }
        }
    }
    if(b==a) {
        if(a%13==0) {
            c = 0;
        }else{
            c = a;
        }
    }

    printf("%d\n", c);
    
}
