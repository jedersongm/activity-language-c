#include <stdio.h>


void sort(int v[], int size){

  for(int i = 1; i < size; i++){

    for(int j = 0; j < i; j++){
      if(v[i] > v[j]){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }
}


int main(int argc, char const *argv[]) {

  int vet[10];
  int size = 10;

  for(int k = 0; k < size; k++){
      printf("Digite um numero:");
      scanf("%d",&vet[k]);
  }

  printf("v -> [");
  for(int pos = 0; pos < size; pos++){
    printf("%d%s",vet[pos],(pos < size-1)?"-":"");
  }
  printf("]\n");

  sort(vet,size);

  printf("v -> [");
  for(int pos = 0; pos < size; pos++){
    printf("%d%s",vet[pos],(pos < size-1)?"-":"");
  }
  printf("]\n");

  return 0;
}
