#include <stdio.h>

int main(){

    int a, b, valor;

    printf("Digite o valor de A");
    scanf("%d", &a);
    printf("Digite o valor de B");
    scanf("%d", &b);
 
   
    if (a > b)
    {
       valor = a%b;
       
    }

    else {
        valor = b % a; 
    }

    if (valor == 0)
    {
        printf("O valor e multiplo");
    }
    
    else {
        printf("O valor nao e multiplo");
    }
    

    return 0;
}