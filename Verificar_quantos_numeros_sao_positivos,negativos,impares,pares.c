#include <stdio.h>

int main()
{
    int a, N;
    int pares = 0, impares = 0, negativos=0, positivos=0;
    printf("Quantos numeros quer verificar?");
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d", &a);
        if(a%2 ==0) {
            pares++;
        }else{
            impares++;
        }
        if(a>0) {
            positivos++;
        }
        if(a<0) {
            negativos++;
        }
        
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    
    
}
