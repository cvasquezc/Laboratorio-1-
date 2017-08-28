/* Laboratorio Uno	
2.-Recorrer un arreglo y mostrar los numeros impares.
Autor: Claudio Vásquez Campos*/

#include <stdio.h>
int main()
{
	int i;
	 //Inicializamos matriz y asignamos sus valores
	int matriz[10]={1,2,3,4,5,6,7,8,9,10};
	for (i = 0; i <= 9; i++)
	{
	if (matriz[i]%2!=0)
		printf("%d,", matriz[i]);
	}
}
