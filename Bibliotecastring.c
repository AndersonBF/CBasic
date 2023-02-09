#include <stdio.h>
#include <string.h>

// strlen(char *str) -> retorna int com tamanho da string
int main () {
    char str1[20] = {'T', 'e','s','t', '\0'};
    char str2[30];
    int tamanho;
    tamanho = strlen(str1);
    printf("%d\n", tamanho);
    for(int i=0; i<tamanho; i++) {
        printf("%c", str1[i]);
    }

// strcpy(string_destino,string_origem)
strcpy(str1, "Lilia");
printf("str1 = %s\n", str1);

strcpy(str2,str1);
printf("str2 = %s\n", str2);

}
