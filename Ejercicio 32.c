
#include<stdio.h>

int main() {
	int limite,mayorr,menorr,number,x;
	printf("Digite el limite de numeros a comparar: \n");
	scanf("%i",&limite);
	x = 1;
	while (x<=limite) {
		printf("Digite un numero: \n");
		scanf("%i",&number);
		if ((x==1)) {
			mayorr = number;
			menorr = number;
		} else {
			if (number>mayorr) {
				mayorr = number;
			} else {
				if (number<menorr) {
					menorr = number;
				}
			}
		}
		x = x+1;
	}
	printf("El numero mayor es: %i\n",mayorr);
	printf("El numero menor es: %i\n",menorr);
	return 0;
}
