#include <stdio.h>
int main() {
  int i,suma; 
  suma = 0;
  for (size_t i = 0; i <= 100; i++) {
    suma = suma + i;
    }
  printf("La sumatoria de todos los numeros es de: %i", suma);

  return 0;
}
