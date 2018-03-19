

#include <stdio.h>
#include <string.h>


typedef struct{
  float value;
  char type;
}Temperatura;

float celsiusToFahrenheit(float tCelsius){
  return (9*tCelsius/5)+32;
}

float fahrenheitToCelsius(float tFahrenheit){
  return 5*(tFahrenheit-32)/9;
}
int main(int argc, char const *argv[]) {
  /* code */
  Temperatura t[200];
  char decision[3];
  int pos = 0;
  float value;
  char type;

  do{
    printf("Informe a escala[Celsius(C) ou Fahrenheit(F):");
    scanf("%s",&type);
    printf("Informe o valor da Temperatura:");
    scanf("%f",&value);

    t[pos].value = value;
    t[pos].type = type;
    pos++;

    printf("Digite \"fim\" para encerrar:");
    scanf("%s",&decision);

  }while(strcmp(decision,"fim") && strcmp(decision,"FIM")  && pos < 200);


  while (t != NULL) {
    printf("%s:%.2f -> %s:%.2f\n",t[0].type,t[0].value,(strcmp(t[0].type,"C") == 0 ? "F" : "C"),(strcmp(t[0].type,"C") == 0 ? celsiusToFahrenheit(t[0].value) : fahrenheitToCelsius(t[0].value)));
  }

  printf("fim");
  return 0;
}
