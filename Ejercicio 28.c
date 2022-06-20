#include <stdio.h>
int main () {
	
	int Numero, i; 

do{ 
printf ("\n Escriba un numero: ");
scanf("%d",& Numero);
} while (Numero<=0);

for (i=1;i<=Numero/2;i++){ 
	if(Numero%i==0){ 
	printf ("\n Sus divisores son: %d",i);
	}
}
printf("\n De su numero ingresado: %d",Numero);

return 0;

}



