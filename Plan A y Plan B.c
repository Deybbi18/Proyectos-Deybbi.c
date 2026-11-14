#include <stdio.h>

int main(){
int plans;
//los impuestos no tiene el valor real es simplemente un valor imaginario
float impuestos = 2.2;
int plan_a = 10;
int plan_b = 24;

int plan_a_impuestos = plan_a * impuestos;
int plan_b_impuestos = plan_b * impuestos;
int comparation = plan_a_impuestos < plan_b_impuestos;

printf("El valor de los impuestos es: %.1f\n",impuestos);
printf("El plan A con impuestos cuesta un: %d\n",plan_a_impuestos);
printf("El plan B con impuestos cuesta un: %d\n",plan_b_impuestos);
printf("El plan A es menor que el plan B: %d\n",comparation);
printf("Si es 1 es verdadero la comparacion.\n");
printf("Si es 0 la comparacion es falsa o incorrecta.\n");

printf("Dale a cualquiera tecla para salir...\n");
getchar();

	return 0;

}