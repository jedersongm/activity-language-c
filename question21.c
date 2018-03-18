/*
21. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char. Associe as variáveis aos ponteiros (use &amp;). Modifique os valores de cada
variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {

  int inteiro = 1994;
  float real = 1.76;
  char caracter = 106;

  int *inteiroPont;
  float *realPont;
  char *caracterPont;

  printf("Valor Inicial: Ano(%d), Altura(%.2f), letra(%c)\n",inteiro,real,caracter);

  inteiroPont = &inteiro;
  realPont = &real;
  caracterPont = &caracter;

  printf("\nInforme uma letra: ");
  scanf("%c",caracterPont);
  printf("Informe um ano:");
  scanf("%d",inteiroPont);
  printf("Informe uma altura: ");
  scanf("%f",realPont);

  printf("\nValores Finais: Ano(%d), Altura(%.2f), letra(%c)\n\n",inteiro,real,caracter);

  return 0;
}
