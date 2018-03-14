/*
12. Escreva uma função recursiva que calcule a sequencia dada por:
F(1) = 1
F(2) = 2
F(n) = 2 * F(n-1) + 3 * F(n-2)
*/

#include <stdio.h>

int sequency(int n){
  if(n == 1)  return 1;
  else if (n == 2) return 2;
  else return 2*sequency(n-1) + 3*sequency(n-2);
}

int main(int argc, char const *argv[]) {

  int n;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d",&n);

  printf("F(%d) = %d\n",n,sequency(n));
  return 0;
}
