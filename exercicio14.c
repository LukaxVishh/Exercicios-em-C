#include <stdio.h>

int main(){

    int valor = 1, res = 0;

    do
    {
        printf("Digite um numero: \n");
        scanf("%d", &res);
        valor = valor * res;
    } while (valor < 100);
    
    printf("o resultado e: %d", valor);


    return 0;
}