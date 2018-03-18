/*
20. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral.
(d) Encontre o aluno com menor media geral.
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6.0
para aprovação.
*/


#include <stdio.h>
#include <string.h>

struct aluno{
	int matricula;
	char nome[100];
	float nota1;
	float nota2;
	float nota3;
};

int maiorAv1(aluno turma[5]){

	int maior = 0;

	for(int i = 1; i < 5; i++){
		if(turma[i].nota1 > turma[maior].nota1) maior = i;
 	}

	return maior;
}

float avg(float av1, float av2, float av3){
	return (av1+av2+av3)/3;
}


int maiorMedia(aluno turma[5]){

	int n = 0;

	for(int i = 1; i < 5; i++){

		if(avg(turma[i].nota1,turma[i].nota2,turma[i].nota3) > avg(turma[n].nota1,turma[n].nota2,turma[n].nota3)) n = i ;

	}

	return n;
}

int menorMedia(aluno turma[5]){

	int n = 0;

	for(int i = 1; i < 5; i++){

		if(avg(turma[i].nota1,turma[i].nota2,turma[i].nota3) < avg(turma[n].nota1,turma[n].nota2,turma[n].nota3)) n = i ;

	}

	return n;
}


int main(){

	struct aluno turma[5];
	int matricula;
	char nome[100];
	float nota1,nota2,nota3;


	for(int i = 0; i < 5; i++){
		printf("XXXXX CADASTRO DE ALUNO XXXXX\n");
		printf("Informe o numero da matricula:");
		scanf("%d",&matricula);
		printf("Informe o nome[max 100 caracteres]:");
		scanf("%s",nome);
		printf("Informe a primeira nota:");
		scanf("%f",&nota1);
		printf("Informe a segunda nota:");
		scanf("%f",&nota2);
		printf("Informe a terceira nota:");
		scanf("%f",&nota3);

		//strcat();
		turma[i].matricula = matricula;
		strcpy(turma[i].nome,nome);
		turma[i].nota1 = nota1;
		turma[i].nota2 = nota2;
		turma[i].nota3 = nota3;

		printf("\n");
	}


	printf("%s FOI ALUNO COM A MAIOR PRIMEIRA NOTA\n",turma[maiorAv1(turma)].nome);
	printf("%s ALUNO COM MAIOR MEDIA\n",turma[maiorMedia(turma)].nome);
	printf("%s ALUNO COM MENOR MEDIA\n",turma[menorMedia(turma)].nome);
	printf("\n XXXX SITUACAO FINAL \n\n");
	for(int k = 0; k < 5; k++){
		float media = avg(turma[k].nota1,turma[k].nota2,turma[k].nota3);
		printf("%s FOI %s\n",turma[k].nome,(media > 6.0) ? "APROVADO":"REPROVADO");
	}

	return 0;
}
