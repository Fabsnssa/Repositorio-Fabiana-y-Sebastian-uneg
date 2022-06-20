#include<stdio.h>
int main () {

int year;
printf("Escriba un year en particular: ");
scanf("%d",&year);

if(year%4==0 && year !=100 || year%400==0){
printf("\n El year ingresado: %d",year);
printf("\n es bisiesto");

}
else{
printf("\n El year ingresado: %d",year);
printf("\n no es bisiesto");
}

return 0;
}