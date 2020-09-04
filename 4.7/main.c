/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 04:32 PM
 */

#include <stdio.h>
#include <stdlib.h>
const float pi=3.141592;
/*
 * 
 */
int main() {
     float radio, perimetro, area;
    printf("Introduzca el radio de un circulo\n");
    scanf("%f", &radio);
    if(radio<=0){
        printf("No tiene solucion\n");
    }else{
        perimetro=2*pi*radio;
        area= pi*pow(radio,2);
        printf("La circuferncia es: %f\n", perimetro);
        printf("El area es: %f\n", area);
    }

    return (EXIT_SUCCESS);
}

