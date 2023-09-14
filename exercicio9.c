#include <stdio.h>

int main(){

   int num, resultado;
   char continua = 's';
   int soma = 0;


    while ((continua == 'S' || continua == 's'))
    {

    printf("Digite um numero: \n");
    scanf("%d", &num);
    resultado = num * 3;
    printf("O resultado da multiplicacao e: %d \n", resultado);
    printf("Deseja continuar multiplicando? Digite S para sim e N para nao. \n", continua);
    scanf(" %c", &continua);
    soma = soma + resultado;
    }
    
    printf("A soma dos resultados ate agora eh: %d", soma);
   
   
    return 0;
}