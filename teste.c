#include <stdio.h>

int main(){

   int num, resultado;
   int contador = 1;


    while (contador <= 5)
    {
       
    printf("O valor do cantador e: %d\n", contador);

   printf("Digite um numero: \n");
   scanf("%d", &num);
   resultado = num * 3;
    contador = contador + 1;
   printf("O valor da multiplicacao e: %d \n", resultado);
   
    }
    
   
    return 0;
}