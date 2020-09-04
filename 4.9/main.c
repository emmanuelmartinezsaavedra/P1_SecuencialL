/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 04:42 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int num1, num2, num3,x1, x2;
    printf("Ingresa 3 numero entertos de tres dijitos\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    x1=num1*num2*num3;
    x2=num1+num2+num3;
    printf("\t\tSuma = %d \n\t\tProducto = %d", x2, x1);

    return (EXIT_SUCCESS);
}

