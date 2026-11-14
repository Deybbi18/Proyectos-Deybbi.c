#include <stdio.h>

int main(){
    int number1 = 10;
    int number2 = 20;

    int number3 = number1 + number2;
    int number4 = number2 - number1;
    int number5 = number1 * number2;
    int number6 = number1 / number2;

    printf("10 mas 20 da: %d\n",number3);
    printf("10 menos 20 da: %d\n",number4);
    printf("10 multiplicado por 20 da: %d\n",number5);
    printf("10 dividido entre 20 da: %d\n",number6);

    printf("presiona para salir...\n");
    getchar();

    return 0;

}