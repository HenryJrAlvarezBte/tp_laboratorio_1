/*
 ============================================================================
 Name        : main.c
 Author      : Henry Junior Alvarez Bustamante
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "ctype.h"
#include "ArrayEmployees.h"



int main()
{
	setbuf(stdout, NULL);

    Employee lista[1000];

    showMenu(lista, 1000);

    return EXIT_SUCCESS;
}
