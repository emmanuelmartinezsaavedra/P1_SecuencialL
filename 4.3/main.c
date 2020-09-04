/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 03:52 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int anio;
    printf("Años bisiestos\n");
    printf("Introduzca el año\n");
    scanf("%d", &anio);
    if(anio%100==0){
        if(anio%400==0)
            printf("%d es año bisiesto\n", anio);
        else
            printf("%d no es año bisiesto\n", anio);
    }else{
        if(anio%4==0)
            printf("%d es año bisiesto\n", anio);
        else
            printf("%d no es año bisiesto\n", anio);
    }

    return (EXIT_SUCCESS);
}

