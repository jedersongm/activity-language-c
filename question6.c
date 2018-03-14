/*

6 -Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor.
Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que
caso o usuário digite um número que já foi digitado anteriormente, o programa devera
pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser
pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos.
*/

#include <stdio.h>

int isExist(int vector[], int number){

  for(int i = 0; i < 10; i++ )
    if(vector[i] == number)
      return 1;
  return 0;
}

void printerVector(int vector[]){
  for(int y = 0; y < 10; y++){
    printf("%d\n",vector[y] );
  }
}

int main(int argc, char const *argv[]) {
  /* code */
  int vector[10];
  int number;
  for(int k = 0; k < 10; k++){
    do{
      printf("Digite um número: ");
      scanf("%d",&number);
    }while(isExist(vector,number));

    vector[k] = number;
  }

  printerVector(vector);

  return 0;
}
