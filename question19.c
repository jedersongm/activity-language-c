#include <stdio.h>
#include <string.h>

typedef struct{

  char nome[100];
  int matricula;
  char curso[100];
}Aluno;

int main(int argc, char const *argv[]) {

  int size = 5,i;
  Aluno turma[size];
  char nome[100];
  char curso[100];


  for(i = 0; i < size; i++){
    printf(">>>>>> ALUNO[%d] <<<<<<\n\n",i+1);
    printf("Informe o nome:");
    fgets(nome,100,stdin);
    printf("Informe o nome do curso:");
    fgets(curso,100,stdin);
    printf("Informe a matricula:");
    scanf("%d",&turma[i].matricula);

    strcpy(turma[i].nome,nome);
    strcpy(turma[i].curso,curso);

    printf("\n\n");
  }

  for(i = 0; i < size; i++){
    printf("(%d) %s\n",turma[i].matricula,turma[i].nome);
    printf("Curso: %s\n\n",turma[i].curso);
  }

  return 0;
}
