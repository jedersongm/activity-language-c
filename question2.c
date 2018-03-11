/*
2 -	Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros:
Dia, Mês e Ano. Teste a validade desta data para saber se esta é uma data válida. Teste se o
dia fornecido e um dia válido: dia &gt; 0, dia ≤ 28 para o mês de fevereiro (29 se o ano for
bissexto), dia ≤ 30 em abril, junho, setembro e novembro, dia ≤ 31 nos outros meses. Teste
a validade do mês: mês &gt; 0 e mês &lt; 13. Teste a validade do ano: ano ≤ ano atual (use uma
constante definida com o valor igual a 2018). Imprimir: “data valida” ou “data invalida” no
final da execução do programa. OBS: Sendo que um ano é bissexto se for divisível por 400
ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 1996
*/
#include "stdio.h"

//Função verifica se o ano é Bissexto
	int isAnoBissexto(int ano){
		if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
			return 1;
		return 0;
	}

	int dateValidator(int dia, int mes, int ano){
		const int anoAtual = 2018;
		const int mesAtual = 3;

		if (ano > anoAtual){
			return 1;
		}else if(ano == anoAtual && mes > mesAtual) return 1;

		if (mes < 1 || mes > 12) return 1;

		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
			return (dia < 1 || dia > 31) ? 1 : 0;
		} else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
			return (dia < 1 || dia > 30) ? 1 : 0;
		}else{
			if (isAnoBissexto(ano)){
				return (dia < 1 || dia > 29) ? 1 : 0;
			}else
				return (dia < 1 || dia > 28) ? 1 : 0;
		}
		return 0;
	}

int main(int argc, char const *argv[])
{
	/* code */
	int dia,mes,ano;

	printf("Informe dia de nascimento:" );
	scanf("%d",&dia);
	printf("Informe o mês de nascimento:");
	scanf("%d",&mes);
	printf("Informe o ano de nascimento:");
	scanf("%d",&ano);

	if(dateValidator(dia,mes,ano))
		printf("\n>>>> Data de nascimento inválida <<<<\n");
	else
		printf("\n>>>> Data de nascimento válida <<<<\n");

	return 0;
}
