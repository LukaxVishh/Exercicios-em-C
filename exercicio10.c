#include <stdio.h>

int main(){

    int num, contador = 0, soma = 0, media;

    while (contador <= 9)
    {
        printf("\n Digite um numero %d: ", contador);
        scanf("%d", &num);
        contador = contador + 1;
        soma = soma + num;
        media = soma / 10;
    }
    

    printf("A soma dos valores eh: %d e a media e: %d", soma, media);

    return 0;
}