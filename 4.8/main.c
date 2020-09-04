/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 04:35 PM
 */

#include <stdio.h>
#include <stdlib.h>
const float pi= 3.141592;
/*
 * 
 */
int main() {
    float radio, altura, hipot,area, volumen;
    printf("Ingresa  el radio y la altura\n");
    scanf("%f %f", &radio, &altura);
    if((radio<=0) || altura<=0){
        printf("No tiene solucion\n");
    }else{
        hipot=sqrt(pow(radio,2)+pow(altura,2));
        area=pi*radio*hipot;
        volumen= (pow(radio,2)*altura*pi)/3;
        printf("Area: %f\n", area);
        printf("Volumen: %f\n", volumen);
    }
    

    return (EXIT_SUCCESS);
}

