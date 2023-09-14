#include <stdio.h>

int main(){

int soma = 0, num = 2, contador = 0;
float media;

while (num <= 100)
{
    soma = soma + num;
    contador = contador + 1;
    num = num + 2;
    media = num / contador;
}

printf("A media dos numeros de 1 a 100 eh: %.2f", media);


return 0;

}
