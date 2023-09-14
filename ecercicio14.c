#include <stdio.h>

int main(){

    int cont = 1, soma = 0;

    while (cont <= 100)
    {
        soma = soma + cont;
        cont = cont + 1;
    }
    
    printf("a soma e: %d", soma);


    return 0;
}