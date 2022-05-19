/*Autor: Ricardo Jafet Granados Chable, Realizado: 03/02/2022
	Tercer programa en C: Temperatura en centigrados convertidos a fahrenheit
	*/

#include<stdio.h>

int main() {
	// Declaracion
	float F, C;
	// Entrada de datos 
	printf("Introduce la temperatura en grados centigrados: ");
	scanf("%f", &C);
	// Proceso
	F =(9/5.0*C)+32;
	// Salida
	printf("La temperatura en Fahrenheit es: %f", F);
	return 0;
}
