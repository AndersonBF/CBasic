#include <stdio.h>

int main() {
    float a,b,c,d,e,f, media;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    media = (a+b+c+d)/4;
    printf("Media: %.1f\n", media);
    if(media>=7.0) {
        printf("Aluno aprovado.\n");
    }
    else if(media<5.0) {
        printf("Aluno reprovado.\n");
    }
    else {
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);
        f = (media+e)/2;
        if(f>=5.0) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", f);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", f);
        }
    }
}
