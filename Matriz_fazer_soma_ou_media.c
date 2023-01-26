#include <stdio.h>
#include <string.h>

int main() {
    double M[12][12];
    char T;
    int a,b, i;
    double soma=0,media=0;
    scanf("%d", &b);
    scanf(" %c", &T);
    if(T=='S'){
        for(int i=0;i<12; i++) {
            for(int j=0; j<12; j++){

            scanf("%lf",&M[i][j]);
            }
    }
        for(int j=0;j<12; j++) {
        soma = soma + M[b][j];
    }
    printf("%.1lf\n",soma);
    }else if(T=='M'){
          for(int i=0;i<12; i++) {
              for(int j=0; j<12; j++){

            scanf("%lf",&M[i][j]);
              }
    }
            for(int j=0;j<12; j++) {
            soma = soma + M[b][j];
    }
        media = soma/12;
    
    printf("%.1lf\n",media);
    }
    
}
