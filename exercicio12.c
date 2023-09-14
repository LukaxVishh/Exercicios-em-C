#include <stdio.h>

int main() {
    int num, cont = 1;

    printf("Digite um numero e veja sua taboada: \n");
    scanf("%d", &num);

    while (cont <= 10)
    {
        printf("A taboada de %d e: \n", num);
        printf("%d X %d = %d \n",num, cont, num * cont);
        cont = cont + 1;
    }
    


    return 0;
}
