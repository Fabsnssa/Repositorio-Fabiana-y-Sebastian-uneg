
#include<stdio.h>
int main (){
	float Num1,Num2,Num3;
	printf ("\n Digite un numero: ");
	scanf("%f", &Num1);
	printf ("\n Digite un segundo numero: ");
	scanf("%f", &Num2);
	printf ("\n Digite un tercer numero: ");
	scanf("%f", &Num3);
	
	if (Num1>Num2 && Num1>Num3){ 
		printf("El numero mayor es el: %.2f \n",Num1);
	}
	else if (Num2>Num1 && Num2>Num3){
		printf("El numero mayor es el: %.2f \n",Num2);
	}
	else if (Num3>Num1 && Num3>Num2){ 
		printf("El numero mayor es el: %.2f \n",Num3);
	}
	else { printf ("Numeros escritos no validos");
	}
	
	return 0;
}
