#include <stdio.h>
#include <string.h>

int main () {
    char string1[55];
    char string2[55];
    int n=0, tamanho=0, tamanho2=0;
   scanf("%d", &n);
   for(int j=0; j<n; j++) {
    scanf("%s %s", string1,string2);
   tamanho2 = strlen(string2); 
   tamanho = strlen(string1);
   if(tamanho2>=tamanho) {
    for(int i=0; i<tamanho2; i++) {
        if (i<tamanho) printf("%c", string1[i]);
        if (i<tamanho2) printf("%c", string2[i]);
    }
   }else{
    for(int i=0; i<tamanho; i++) {
        if (i<tamanho) printf("%c", string1[i]);
        if (i<tamanho2) printf("%c", string2[i]);
    }
   } 
    printf("\n");
   }
    return 0;
}
