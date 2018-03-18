/*
22 - Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

*/

#include <stdio.h>

int main(){

	int a,b;

	printf("Digite um numero para A:");
	scanf("%d",&a);
	printf("Digite um numero para B:");
	scanf("%d",&b);

	printf("valor: %d",(&a > &b) ? a : b);
	return 0;
}
