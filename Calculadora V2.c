#include <stdio.h>

int main(){

float numero1,numero2;
float result;
int administrador;

printf("+=============================================+\n");
printf("|               Calculadora V2                |\n");
printf("+=============================================+\n");
printf("===Hecho por Deybbi===\n");
printf("Pon el primer numero: \n");
scanf("%f",&numero1);

printf("\nElige el segundo numero: \n");
scanf("%f",&numero2);

printf("\n+================================+\n");
printf("| 1 si quieres hacer una suma    |\n");
printf("| 2 si quires hacer una resta    |\n");
printf("| 3 si quieres multiplicar       |\n");
printf("| 4 si quieres dividir           |\n");
printf("+================================+\n");
scanf("%d",&administrador);

if (administrador == 1){
	result = numero1 + numero2;
	printf("%.2f + %.2f = %.2f\n",numero1,numero2,result);

} else if (administrador == 2){
	result = numero1 - numero2;
	printf("%.2f - %.2f = %.2f\n",numero1,numero2,result);

} else if (administrador == 3){
	result = numero1 * numero2;
	printf("%.2f * %.2f = %.2f\n",numero1,numero2,result);

} else if (administrador == 4){
	result = numero1 / numero2;
	printf("%.2f / %.2f = %.2f\n",numero1,numero2,result);

} else {
	printf("Elige un numero del 1 al 4\n");

}

printf("Dale a ENTER para salir...\n");
getchar();
getchar();

return 0;

}