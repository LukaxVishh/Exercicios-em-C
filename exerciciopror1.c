#include <stdio.h>

int main(){

    float val_sal, val_par, val_max;

    printf("Digite o seu salario: \n");
    scanf("%f", &val_sal);
    printf("Digite o valor da parcela: \n");
    scanf("%f", &val_par);

    val_max = 0.30 * val_sal;


    if (val_par <= val_max)
    {
        printf("Emprestimo aprovado.");
    }
    else{
        printf("Emprestimo negado.");
    }
    



    return 0;
}