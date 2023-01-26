#include <stdio.h>

//transformando dias totais para anos, meses e dias
//Ex.: 400 dias para quantidade de anos, meses e dias restantes.
int main()
{
    int idade,dias,mes,ano, dia;
    printf("");
    scanf("%d", &idade);
    dias = idade/365;
    printf("%d ano(s)\n", dias);
    mes = idade%365;
    ano = mes/30;
    printf("%d mes(es)\n", ano);
    dia = mes%30;
    printf("%d dia(s)", dia);

}
