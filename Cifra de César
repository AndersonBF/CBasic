/*
 ============================================================================
 Name        : CifradeCesar
 Description : Esse código visa tranformar uma letra na segunda subsequente
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	//imprimir letras de uma string
	char senha[100];
	fgets(senha,sizeof(senha), stdin);
	senha[strlen(senha)-1] = '\0';
	for(int i=0; i< strlen(senha); i++) {
		int j = senha[i];
		//printf("%d", j);
		int k = j;
		if(k == 121 || k == 122) {
			k = j - 24;
		}else{
			k = j + 2;
		}
		char c = k;
		printf("%c", c);
		//printf("%c\n",senha[i] );

	}

}
