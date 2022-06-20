#include <stdio.h>
int main() {
  int num, i,suma=0;
      printf("Inserte un numero para sumar sus digitos: ");
    scanf("%i", &num);
	i=1;
	
	while (i<=num){
		suma= suma + i;
		i++;
	}

    printf("Su resultado es: %i", suma);

    return 0;
}
