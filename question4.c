/*
Em Matemática, o número harmônico designado por H(n) define-se como sendo a soma da
serie harmônica: H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n Faça um programa que leia um valor n
inteiro e positivo e apresente o valor de H(n).
*/

#include "stdio.h"

float harmonicNumber(int n){
	return (n == 1)?((float)1/n):(float)1/n + harmonicNumber(n-1);
}

int main(int argc, char const *argv[])
{
	int n;

	printf("Informe um número inteiro:");
	scanf("%d",&n);

	printf("H(%d) = %.3f\n",n,harmonicNumber(n));

	return 0;
}
