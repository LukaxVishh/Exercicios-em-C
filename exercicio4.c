#include <stdio.h>

int main(){

    int qtd_cop, valor;
    float valor1;
    printf("Digite a quantidade de copias: ");
    scanf("%d", &qtd_cop);

    if (qtd_cop <= 100)
    {
        valor1 = 0.25 * qtd_cop;
    }
    
    else if (qtd_cop > 100)
    {
        valor = qtd_cop - 100;
        valor1 = (valor*0.20)+100*0.25;
        
    }

    printf("O valor do xerox fica: R$%.2f", valor1);

    return 0;
}