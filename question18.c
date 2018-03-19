#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
  char nome[100];
  int idade;
  char endereco[150];
}

int main(int argc, char const *argv[]) {
  /* code */

  struct Pessoa p;
  char nome[100];
  char endereco[150];

  printf("Digite o nome:");
  scanf("%s",nome);
  printf("Digite a idade:");
  scanf("%d",&p.idade);
  printf("Digite o endereço:");
  fgets(endereco,150,stdin);

  strcpy(p.nome,nome);
  strcpy(p.endereco,endereco);

  return 0;
}
