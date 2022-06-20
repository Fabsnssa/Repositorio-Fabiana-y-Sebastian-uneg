//#<>{}\

#include<stdio.h>
int main () {

int Num,iterador=1,Factorial=1;
printf("Digite un numero para obtener su factorial: ");
scanf ("%i",&Num);

for (iterador=1;iterador<=Num;iterador++){
Factorial*=iterador;
printf("\n El factorial del número escrito es: %i",Factorial);

}

return 0;
}
