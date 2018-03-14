/*
11 - Faça uma função recursiva que calcule e retorne o N-esimo termo da sequência Fibonacci.
Alguns números desta sequencia são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
*/

#include <stdio.h>

int fibonnaci(int n){

  if(n == 1)  return 0;
  else if (n == 2) return 1;
  else return fibonnaci(n-1) + fibonnaci(n-2);
}

int main(int argc, char const *argv[]) {

  int n;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d",&n);

  printf("fibonnaci(%d) = %d\n",n,fibonnaci(n));
  return 0;
}
