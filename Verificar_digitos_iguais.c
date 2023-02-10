#include <stdio.h>
#include <string.h>

int main () {
    char num1[1000];
    char num2[1000];
    int tamanho1, tamanho2, j=0, ncasos=0;
    scanf("%d", &ncasos);
    for (int k=0; k<ncasos; k++) {
         scanf("%s %s", num1, num2);
   // printf("%s %s", num1, num2);
    tamanho1 = strlen(num1);
    tamanho2 = strlen(num2);
    j = tamanho2;
    for(int i=j; i>0; i--) {
        if(num1[tamanho1-1] == num2[j-1]) {
            tamanho1--;
            j--;
      
    }
    }
      if(j==0) {
            printf("encaixa\n");
        }else {
            printf("nao encaixa\n");
        }
    }
   
}