/*
	1 - Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o
	numero de dias trabalhados pelo encanador e imprima a quantia líquida que devera ser
	paga, sabendo-se que são descontados 8% para imposto de renda.
*/

#include "stdio.h"
int main(int argc, char const *argv[])
{
	/* code */

	float calcValor(int hours){

		return 0.92*hours*30;
	}

	int hours;

	printf("Informe a quantidade de horas trabalhadas:\n");
	scanf("%d",&hours);

	printf("Quantia a ser paga: R$ %.2f\n",calcValor(hours));

	return 0;
}
