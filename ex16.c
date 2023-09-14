#include <stdio.h>

int main(){

    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, num;

    printf("Digite uma sequencia de numeros e verifique seus grupos: \n");

    do
    {
    scanf("%d", &num);


        if (num >= 0 && num <= 25)
        {
            cont1++;
        }
        else if (num >= 26 && num <= 50)
        {
            cont2++;
        }
        else if (num >= 51 && num <= 75)
        {
            cont3++;
        }
        else if (num >= 76 && num <= 100)
        {
            cont4++;
        }
        
        
    } while (num > 0);
    
        printf("A quantidade dos intervalos sao [int 1: %d], [int 2: %d], [int 3: %d], [int 4: %d]", cont1, cont2, cont3, cont4);






    return 0;
}