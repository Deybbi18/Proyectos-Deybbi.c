#include <stdio.h>

int main(){

int temperature;

printf("=================================================\n");
printf("|              Temperatura Inteligente          |\n");
printf("=================================================\n");
printf("===Hecho por Deybbi===\n");
printf("===Esta basada en datos Celsisus===\n");
printf("Pon tu temperatura para analizarlar: \n");
scanf("%d",&temperature);

if (temperature <= 16){
	printf("Es muy baja cuidado\n");

} else if (temperature <= 20){
	printf("Hace Frio\n");

} else if (temperature >= 30){
	printf("Hace mucho calor\n");

} else {
  printf("La temperatura no es valida pon otra\n");

}

printf("Dale un tecla para salir...\n");
getchar();
getchar();

	return 0;
}