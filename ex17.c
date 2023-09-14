#include <stdio.h>

int main(){

    int nump = 0, soma = 0;
    char 

    do
    {
        printf("Digite uma sequencia de numero: \n");
        scanf("%d", &nump);
    
    if (nump > 0)
    {
        
       soma = soma + nump;
    }

    else if (nump < 0){
        soma = soma + nump;
    }

       
    } while (nump != 0);
    
    printf("A soma dos numeros positivos sao: %d", soma);

    return 0;
}