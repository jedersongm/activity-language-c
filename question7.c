/*
Escreva um programa que leia uma matriz de 3 x 3 elementos. Calcule a soma dos
elementos que estão na diagonal secundaria.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

	int mat[3][3];
	int diagonal;

	for (int j = 0; j < 3; j++){
		for(int i = 0; i < 3; i++){
			printf("Informe um número inteiro:");
			scanf("%d", &mat[j][i]);
			if(j+i == 2)
			 diagonal += mat[j][i];
		}
	}

	printf("Soma diagonal secundária: %d\n",diagonal);
	return 0;
}
