#include <stdio.h>

int main(){

int saldo = 200;
int papas = 45;
int dulces = 30;
int refresco = 35;
int agua = 25;
int administrador;
int result;

printf("+==============================+\n");
printf("|      MAQUINA EXPENDEDORA      |\n");
printf("+===============================+\n");
printf("===Creado por Deybbi===\n");

printf("\nTu saldo es de %d\n",saldo);
printf("1. agua a %d\n",agua);
printf("2. dulces a %d\n",dulces);
printf("3. refresco a %d\n",refresco);
printf("4. papas a %d\n",papas);
scanf("%d",&administrador);

if (administrador == 1){
	result = saldo - agua;
	printf("Compraste el agua exitosamente tu saldo es: %d\n",result);
	
} else if (administrador == 2){
	result = saldo - dulces;
	printf("Compraste los dulces exitosamente tu saldo es: %d\n",result);
	
} else if (administrador == 3){
	result = saldo - refresco;
	printf("Compraste el refresco exitosamente tu saldo es: %d\n",result);
	
} else if (administrador == 4){
	result = saldo - papas;
	printf("Compraste las papas exitosamente tu saldo es: %d\n",result);
	
} else {
	printf("ERROR seleciona una de las 4 opciones\n");
	
}

printf("Dale ENTER para salir...\n");
getchar();
getchar();

return 0;
}
