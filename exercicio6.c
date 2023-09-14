#include <stdio.h>

int main(){

    float valor, desconto, valort, valorh;

    printf("Digite o valor da compra e veja o seu desconto: \n");
    scanf("%f", &valor);

    if (valor > 500.0)
    {
        desconto = 0.15 * valor;
        valort = valor - desconto;
         valorh = valor * (1-desconto);
    }
    
    else if ((valor >= 200.0 && valor <= 499.99))
    {
        desconto = 0.10*valor;
        valort = valor - desconto;
    }
    else if (valor < 200.0)
    {
        desconto = valor*0.05;
         valort = valor - desconto;
        
    }

    printf("O valor do seu produto e: %.2f \n", valor);
    printf("O seu desconto tem um valor de: %.2f \n", desconto);
    printf("O seu desconto gerou um valor de: %.2f \n", valort);
    

    return 0;
}