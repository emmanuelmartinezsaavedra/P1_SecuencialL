/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 03:54 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int num, p,n;
    printf("Intruduza un numero\n");
    scanf("%d", &num);
    (num>=0) ? printf("El numero es positivo\n"): 
        printf("El numero es negativo\n");

    return (EXIT_SUCCESS);
}

