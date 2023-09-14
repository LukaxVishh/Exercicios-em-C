#include <stdio.h>

int main(){

    int vel_via, vel_car, vel_max;
    float multa;

    printf("Digite a velocidade da via: \n");
    scanf("%d", &vel_via);
    printf("Digite a velocidade em acao: \n");
    scanf("%d", &vel_car);

    if (vel_via == vel_car)
    {
        printf("A velocidade e permitida.");
    }
     else if (vel_car > vel_via)
     {
        vel_max = vel_car - vel_via;
        multa = vel_max*7;
        printf("excesso de velocidade ocasionando multa no valor de: %.2f, devido a estar a %dKmh acima do permitido.", multa, vel_max);
     }
     


    return 0;
}