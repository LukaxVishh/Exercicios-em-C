#include <stdio.h>
int main(){

    int plac, dis_lan;

    printf("Digite a distancia de lancamento: ");
    scanf("%d", &dis_lan);

    if (0 < dis_lan < 800)
    {
        printf("1 ponto");
    }
    
    else if (800 < dis_lan <= 1400)
    {
        printf("2 pontos");
    } 

    else if (1400 < dis_lan <= 2000)
    {
        printf("3 pontos");
    }
    return 0;
}