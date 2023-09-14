#include <stdio.h>

int main(){

    int a, b, valor;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    valor = a * b;

   if (valor == 0)
   {
    printf("O valor e nulo.");
   }

   else if (valor > 0)
   {
    printf("O resultdo tem um sinal positivo");
   }

   else if (valor < 0)
   {
    printf("O resultado tem um sinal negativo");
   }
   
   
   

    return 0;
}