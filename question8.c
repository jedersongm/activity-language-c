/*
8 - Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente esses
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem.
*/

#include <stdio.h>
int used_vector = 0;
const int size_vector = 10;

void insertionVector(int vector[], int number){
    //int j, position;
    if(used_vector == 0){
      vector[0] = number;
      used_vector++;
    }else if(used_vector < size_vector){

      for(int i = 0; i < used_vector; i++){
        if(number < vector[i]){

          for(int j = used_vector;j < i; j--){
            vector[j] = vector[j-1];
          }

          vector[i] = number;
          used_vector++;
        }else if(i == used_vector - 1){
          vector[used_vector] = number;
          used_vector++;
        }// fim do "if"

      }// fim do "for" que pecorre o vetor

    }//end "else"

}// end function "insertionVector"

void printerVector(int vector[]){
  for(int i = 0; i < size_vector; i++)
    printf("%d\n",vector[i]);
}

int main(int argc, char const *argv[]) {
  /* code */
  int vector[10];
  int number;

  for(int i = 0; i < size_vector; i++){
    printf("Digite um número:");
    scanf("%d",&number);
    insertionVector(vector,number);
  }

  printerVector(vector);
  return 0;
}
