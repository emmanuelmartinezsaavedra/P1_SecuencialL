/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 03:39 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    float C, F=1.8;
    printf("Introduzca la temperatura en grados Celsius\n");
    scanf("%f", &C);
    F=F*C+32;
    printf("Grados:\n");
    printf("Celsius: %.2f\n", C);
    printf("Fahrenheit: %.2f\n", F);

    return (EXIT_SUCCESS);
}

