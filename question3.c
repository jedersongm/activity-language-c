/*
3 - Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do-while.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{

	int i;
	printf("USANDO >> FOR <<\n");
	for (i = 1; i <= 100; ++i)
	{
		if(i % 10 == 0){
			printf("%d\n",i);
		}else printf("%d - ",i);
	}
	printf("\n\nUSANDO >> WHILE <<\n");
	i = 1;
	while(i<=100){
		if(i % 10 == 0){
			printf("%d\n",i);
		}else printf("%d - ",i);
		i++;
	}

	printf("\n\nUSANDO >> DO-WHILE <<\n");
	i = 1;
	do{
		if(i % 10 == 0){
					printf("%d\n",i);
		}else printf("%d - ",i);
		i++;
	}while(i <= 100);

	return 0;
}
