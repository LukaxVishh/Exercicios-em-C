//Efetuar a leitura de um valor numérico inteiro positivo ou negativorepresentado pela variável N e apresentar o valor lido como sendo positivo. Dica: se o valorlido for menor que zero, ele deve ser multiplicado por -1//

#include <stdio.h>

int main(){

    int n, num_neg;

    printf("Digite um numero e verifique o mesmo como positivo: \n");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("O numero %d e positivo.", n);
    }
    
    else if (n < 0)
    {
        num_neg = n * (-1);
        printf("Agora seu numero %d e positivo.", num_neg);
    }
    



    return 0;
}