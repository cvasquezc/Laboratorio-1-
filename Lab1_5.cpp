/*Laboratorio Uno	3.-Multiplicacion de matrices (no mas grandes que 5x5).
Autor: Claudio Vásquez Campos*/
#include <stdio.h>
void swap( int *valor1, int *valor2);
int main ()
 {
 	int numA,numB;
	printf("Programa para intercambiar valores de dos numeros\n");
	printf("Ingrese un numero para la variable A: ");
	scanf("%d",&numA);
	printf("Ingrese otro numero para la variable B: ");
	scanf("%d",&numB);
	printf("Los valores actuales son\n");
	printf("\tVariable A: %d\n", numA);
	printf("\tVariable B: %d\n", numB);
	printf("Se envian variables a intercambiar sus valores entre ellas");
	swap( &numA, &numB);
	printf("\n Ahora el valor de la variable A es: %d\n y el valor de la variable B es: %d\n",numA ,numB);
	return 0;
}

void swap( int *valor1, int *valor2)
{
	int aux;
	aux = *valor1;
	*valor1 = *valor2;
	*valor2 = aux;
}
