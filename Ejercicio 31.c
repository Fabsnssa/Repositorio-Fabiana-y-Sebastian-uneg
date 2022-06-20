

#include<stdio.h>

int main() {
	int conteonn;
	int conteonp;
	int i;
	int nnegativos;
	int npositivos;
	int num;
	int promedio;
	conteonp = 0;
	npositivos = 0;
	conteonn = 0;
	nnegativos = 0;
	for (i=0;i<6;i+=1) {
		printf("Ingrese un numero: \n");
		scanf("%i",&num);
		if ((num>0)) {
			npositivos = npositivos+num;
			conteonp = conteonp+1;
		} else {
			nnegativos = nnegativos+num;
			conteonn = conteonn+1;
		}
	}
	if (nnegativos==0) {
		promedio = 0;
	} else {
		promedio = promedio/nnegativos;
	}
	printf("La cantidad de numeros positivos ingresados es:%i\n",conteonp);
	printf("La cantidad de numeros negativos ingresados es:%i\n",conteonn);
	printf("La suma de numeros positivos es:%i\n",npositivos);
	printf("La suma de numeros negativos es:%i\n",nnegativos);
	printf("El promedio de los numeros negativos es:%i\n",promedio);
	return 0;
}

