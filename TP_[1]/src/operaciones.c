/*
 * operaciones.c
 *
 *  Created on: 23 sep. 2021
 *      Author: Henry Junior Alvarez Bustamante
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

/** \brief Hace la suma de 2 flotantes
 *
 * \param primer valor ingresado a calcular la suma
 * \param segundo valor ingresado a calcular la suma
 * \return devuelve la suma de los 2 flotantes
 *
 */

float suma(float* x,float* y){
    float suma;

    suma=*x+*y;

    return suma;
}

/** \brief Hace la resta de 2 flotantes
 *
 * \param primer valor ingresado a calcular la resta
 * \param segundo valor ingresado a calcular la resta
 * \return devuelve la resta de los 2 flotantes
 *
 */

float resta(float* x,float* y){
    float resta;

    resta=*x-*y;

    return resta;
}

/** \brief Hace la division de 2 flotantes
 *
 * \param primer valor ingresado a calcular la division
 * \param segundo valor ingresado a calcular la division distinto a 0
 * \return devuelve la division de los 2 flotantes
 *
 */


float division(float* x,float* y){
    float divisiones;

    if(*y!=0)
    {
        divisiones= *x / *y;
    }
    else if(*y==0)
    {
        printf("No es posible dividir por cero.\n");
    }
    return divisiones;
}

/** \brief Hace la multiplicacion de 2 flotantes
 *
 * \param primer valor ingresado a calcular la multiplicacion
 * \param segundo valor ingresado a calcular la multiplicacion
 * \return devuelve la multiplicacion de los 2 flotantes
 *
 */


float multiplicar(float* x,float* y){
    float multiplicar;

    multiplicar= *x * *y;

    return multiplicar;
}

/** \brief Hace la factorial de 1 flotante casteado a entero
 *
 * \param primer valor ingresado a calcular la factorial
 * \return devuelve la factorial del flotante casteado a entero
 *
 */

long int factorial(float* x){
    long int factorial=1;
    int i;
    int n;

    n= (int) *x;
    if(n>=0){
		for(i=1;i<=n;i++)
		{
			factorial=factorial * i;
		}
    }else if(n<0){
    	printf("No se puede sacar factorial de numero negativo.\n");
    }
    return factorial;
}

/** \brief Hace la factorial de 1 flotante casteado a entero
 *
 * \param primer valor ingresado a calcular la factorial
 * \return devuelve la factorial del flotante casteado a entero
 *
 */

long int factorial2(float* x){
    long int factorial2=1;
    int i;
    int n;

    n= (int) *x;
    if(n>=0){
		for(i=1;i<=n;i++)
		{
			factorial2=factorial2 * i;
		}
    }else if(n<0){
    	printf("No se puede sacar factorial de numero negativo.\n");
    }
    return factorial2;
}
