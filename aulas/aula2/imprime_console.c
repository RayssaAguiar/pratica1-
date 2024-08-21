#include <stdio.h> //biblioteca entrada e saida

int main() { 
   // imprime texto 
  printf("Bom dia\n\n"); 

  // imprime um numero inteiro
  printf("%i\n", 10);
  printf("%i %i\n", 11, 22);
printf("%5i\n", 110);
  printf("%05i\n", 1);
  // imprime um numero decimal 
  printf("%f\n", 10.51234);
  printf("%10.2f\n", 10.5888);  
  printf("%10.2f\n", 10155.5888);
  //imprime um caractere entre aspas simples
  printf("%c\n", 'A');
  printf("%c\n", 66);
  //imprime uma string 
  printf("%s\n", "Boa noite");
  printf("%30s!\n", "Quero café ");
  printf("%-30s!\n", "Quero café ");
  
  return 0;
} 