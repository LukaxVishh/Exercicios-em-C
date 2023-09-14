#include <stdio.h>

int main(){

    float valor, desconto, desconto_aplicado;
    int cod;

    printf("Digite o valor da estiqueta do produto: \n");
    scanf("%f", &valor);
    printf("Digite a opcao de pagamento desejada: \n");
    scanf("%d", &cod);

    switch (cod)
    {
        case 1:
        desconto = 0.10 * valor;
        desconto_aplicado = valor - desconto;
        printf("Pela forma de pagamento escolhido, o total e: %.2f", desconto_aplicado);
        break;

         case 2:
        desconto = 0.05 * valor;
        desconto_aplicado = valor - desconto;
        printf("Pela forma de pagamento escolhido, o total e: %.2f", desconto_aplicado);
        break;

         case 3:
        printf("Pela forma de pagamento escolhido, o total e: %.2f", valor);
        break;

         case 4:
        desconto = 0.10 * valor;
        desconto_aplicado = valor + desconto;
        printf("Pela forma de pagamento escolhido, o total e: %.2f", desconto_aplicado);
        break;

    
    default: printf("opcao invalida.");
        break;
    }

    return 0;
}