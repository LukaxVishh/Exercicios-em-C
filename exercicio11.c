#include <stdio.h>

int main(){

    float kiko = 1.40, chav = 1.10;
    int contador = 0;

    while (kiko > chav)
    {
    kiko = kiko + 0.02;
    chav = chav + 0.03;
    contador = contador + 1;

    }
    
    printf("A quantidade de anos que se passaram eh: %d", contador);


    return 0;
}