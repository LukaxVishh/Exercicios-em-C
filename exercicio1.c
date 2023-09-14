#include <stdio.h>

int main(){

    int cod, quant;
    float valor, val_total;

    printf("================================== \n");
    printf("         DOGAO TOP 30              \n");
    printf("================================== \n");
    printf(" 1º   | Cachorro-qunete: R$12,00 | \n");
    printf(" 2º   | X-Salada: R$ 15,00       | \n");
    printf(" 3º   | X-Bacon: R$18,00         | \n");
    printf(" 4º   | Torrada simples: R$8,00  | \n");
    printf(" 5º   | Refrigerante: R$4,50     | \n");
    printf("Digite uma opcao: \n");
    scanf("%d", &cod);
    printf("Digite a quantidade desejada: \n");
    scanf("%d", &quant);


    switch (cod)
    {
    case 1:
    val_total = 12.00 * quant;
    printf("O total da sua compra e: %2.2f", val_total);
    
        break;
    

    case 2: 
    val_total = 15.00 * quant;
    printf("O total da sua compra e: %2.2f", val_total);
    
        break;

    case 3: 
    val_total = 18.00 * quant;
   printf("O total da sua compra e: %2.2f", val_total);

        break;

        case 4:
    val_total = 8.00 * quant;
    printf("O total da sua compra e: %2.2f", val_total);

        break;

        case 5:
    val_total = 4.50 * quant;
    printf("O total da sua compra e: %2.2f", val_total);

        break;

    default: printf("Volte sempre");
        break;
    }

    return 0;
}