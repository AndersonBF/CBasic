#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   long int a = 0, b = 0, tamanho = 0;
   char numero[105];
    int quantosnumeros = 0;
    scanf("%d", &quantosnumeros);
    for(int j=0; j<quantosnumeros;j++) {
       scanf("%s", &numero);
       tamanho = strlen (numero);
       b = 0;
          for(int i=0; i < tamanho;i++) {
            if(numero[i]=='1') b+= 2;
            if(numero[i]=='2') b+= 5;
            if(numero[i]=='3') b+= 5;
            if(numero[i]=='4') b+= 4;
            if(numero[i]=='5') b+= 5;
            if(numero[i]=='6') b+= 6;
            if(numero[i]=='7') b+= 3;
            if(numero[i]=='8') b+= 7;
            if(numero[i]=='9') b+= 6;
            if(numero[i]=='0') b+= 6;
       }
       printf("%d leds\n", b);

    }
   
}
