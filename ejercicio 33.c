
#include<stdio.h>

int main () { 

char opcion[3];
float aprobados;
	float i;
	float nota;
	float totalaprobados;
	float x;
	float yy;
	nota = 0;
	aprobados = 0;
	totalaprobados = 0;
	i = 0;
	x = 0;
	yy = 0;
printf ("Desea revisar las calificaciones: ");
scanf("%s",opcion);
do {
	
	while (nota!=-1 && nota<=10) {
		printf("Alumno, ingrese su calificacion: \n");
		scanf("%f",&nota);
		if ((nota!=-1&& nota<=10)) {
			if (nota>4) {
				printf("Aprobado\n");
				aprobados++;
				totalaprobados = totalaprobados+nota;
				i = i+1;
				x = (aprobados*100)/i;
				yy = totalaprobados/aprobados;
			} else {
				printf("Reprobado\n");
			}
		}
	}
	
}while (opcion[3]=='S');


printf("El porcentaje de alumnos aprobados son: %:  %.2f\n",x);
printf("El promedio de alumnos aprobados son: %.2f\n",yy);
	
return 0; 
}
