
#include<stdio.h>

int main() {
	
	int impares=0;
	int multiplostres=0;
	int num;
	int pares=0;
	
	printf("Todo terminara cuando se ingrese el numero (-1)\n");
	num = 1;
	
	while (num!=-1) {
		printf("Digite un numero:\n");
		scanf("%i",&num);
		
		if (num!=-1) {
			if (num%2==0) {
				pares = pares+1;
			} else {
				impares = impares+1;
			}
			if (num%3==0) {
				multiplostres = multiplostres+1;
			}
		}
	}
	
	printf("Numeros pares: %i\n",pares);
	printf("Numeros impares: %i\n",impares);
	printf("Numeros multiplos de 3: %i\n",multiplostres);
	
	return 0;
}
