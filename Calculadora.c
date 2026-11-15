#include <stdio.h>

int main(){

float number1,number2,result;
int opcion;

printf("===Calculadora.C===\n");
printf("Hecho por Deybbi\n");
printf("Elije el primer numero para la operacion: ");
scanf("%f",&number1);

printf("\nEscribe el segundo numero\n");
scanf("%f",&number2);

printf("Que operacion quieres hacer\n");
printf("1 Si quieres hacer una suma\n");
printf("2 Si quieres hacer una resta\n");
printf("3 si quieres multiplicar\n");
printf("4 Si quieres dividir\n");
printf("elige una operacion del 1-4\n");
scanf("%d",&opcion);

if (opcion == 1){
	result = number1 + number2;
	printf("\nResultado: %.2f + %.2f = %.2f\n",number1,number2,result);

} else if (opcion == 2){
	result = number1 - number2;
	printf("\nResultado: %.2f - %.2f = %.2f\n",number1,number2,result);

} else if (opcion == 3){
	result = number1 * number2;
	printf("\nResultado: %.2f * %.2f = %.2f\n",number1,number2,result);

} else if (opcion == 4){
	if (number2 != 0){
	result = number1 / number2;
	printf("\nResultado: %.2f / %.2f = %.2f\n",number1,number2,result);

	} else {
		printf("\n No se puede dividir entre 0\n");

	}

	}else{
		printf("\nOpcion no valida. Debes elegir 1 y 4.\n");

	}

	printf("Presiona para cerrar la calculadora...\n");
	getchar();
	getchar();

	return 0;
}
