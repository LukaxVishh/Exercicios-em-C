#include <stdio.h>

int main(){

int D;  // Distância do robô até o início da quadra

    printf("Digite a distância D (em centímetros): ");
    scanf("%d", &D);

    if (D >= 0 && D <= 2000) {
        int pontos;

        if (D <= 800) {
            pontos = 1;
        } else if (D <= 1400) {
            pontos = 2;
        } else {
            pontos = 3;
        }

        printf("O lancamento vale %d ponto(s).\n", pontos);
    } else {
        printf("Distância inválida. A distância deve estar entre 0 e 2000 centímetros.\n");
    }


    return 0;
}