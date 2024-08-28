#include <stdio.h>
#include <limits.h>
#include <float.h>


int main() {
  printf("O tipo 'char' ocupa %lu byte(s) na memória.\n", sizeof(char));
  printf("O tipo 'int' ocupa %lu byte(s) na memória.\n", sizeof(int));
  printf("O tipo 'float' ocupa %lu byte(s) na memória.\n", sizeof(float));
printf("O tipo 'double' ocupa %lu byte(s) na memória.\n", sizeof(double));
  printf("O tipo 'void' ocupa %lu byte(s) na memória.\n", sizeof(void));
  printf("O tipo 'char' aceita valores entre %i e %i\n.\n", CHAR_MIN, CHAR_MAX);
  printf("O tipo 'int' aceita valores entre %i e %i\n.\n", INT_MIN, INT_MAX);


  return 0;
}
