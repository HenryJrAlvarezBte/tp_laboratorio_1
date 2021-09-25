/*
 ============================================================================
 Name        : TP_[1].c
 Author      : Henry Junior Alvarez Bustamante
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main() {

	setbuf(stdout, NULL);

	float A=0;
	float B=0;
	float resultado;
	long int fact1;
	long int fact2;
	float divisiones;
	int menu;
	char seguir='s';

	printf("**** Calculadora *****\n");

	do{
		printf("\n1- Ingresando 1er operando\n");
		printf("2- Ingresando 2do operando\n");
		printf("3- Calcular e informar resultados\n");
		printf("4- Salir\n");
		printf("Ingrese opcion: ");
		fflush(stdin);
		scanf("%d",&menu);

		switch(menu){
		case 1:
			printf("\nIngreso primer valor: ");
			scanf("%f",&A);
			break;
		case 2:
			printf("\nIngrese el segundo valor: ");
			scanf("%f",&B);
			break;
		case 3:
			resultado=suma(&A,&B);
			printf("El resultado de A+B es: %.2f\n",resultado);
			resultado=resta(&A,&B);
			printf("El resultado de A-B es: %.2f\n",resultado);
			divisiones=division(&A,&B);
			if(B!=0)
			{
				printf("El resultado de A/B es: %.6f\n",divisiones);
			}
			resultado=multiplicar(&A,&B);
			printf("El resultado de A*B es: %.2f\n",resultado);
			fact1=factorial(&A);
			if(A>=0){
				printf("El factorial de A es: %ld \n",fact1);
			}
			fact2=factorial(&B);
			if(B>=0){
				printf("El factorial de B es: %ld \n",fact2);
			}
			break;
		case 4:
			seguir='n';
			break;
		default:
			printf("Opcion no valida.\n");
		}
		system("pause");

		system("cls");
	}while(seguir=='s');

	return EXIT_SUCCESS;
}
