/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 04:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
     int num1, num2, num3;
    float media;
    printf("Ingresa 3 numeros\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    media= (num1+num2+num3)/3.0;
    printf("La media es %.3f", media);

    return (EXIT_SUCCESS);
}

