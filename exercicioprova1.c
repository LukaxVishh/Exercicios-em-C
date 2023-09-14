#include <stdio.h>

int main(){

    int cpf, senha;

    printf("Digite o seu CPF: \n");
    scanf("%d", &cpf);
    printf("Digite sua senha: \n");
    scanf("%d", &senha);

    if (cpf == 1234567891 && senha == 123789)
    {
        printf("Acesso permitido.");
    }
    else{
        printf("Acesso negado");
    }


    return 0;
}