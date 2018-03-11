/*
	Chico tem 1.50 metros e cresce 2 centímetros por year, enquanto Zé tem 1.10 metros e
cresce 3 centímetros por year. Escreva um programa que calcule e imprima quantos years
serão necessários para que Zé seja maior que Chico.
*/
#include "stdio.h"

int main(int argc, char const *argv[])
{
	/* code */

	float heightChico = 1.50, heightZe = 1.10, growthChico = 0.02, growthZe = 0.03;
	int year = 0;

	do{
		heightChico += growthChico;
		heightZe += growthZe;
		year++;
	}while(heightChico >= heightZe);

	printf("São preciso %d years\n",year);

	return 0;
}
