#include <stdio.h>
#include <stdlib.h>

int main(){
	
int edad;

printf("Cual es tu edad\n");
scanf("%d", &edad);

if (edad >= 18){
	printf("Eres mayor de edad\n");
}else{
	printf("Eres menor de edad\n");

}
printf("Haz click para salir :)...\n");
getchar();
getchar();
 return 0;
 

 }