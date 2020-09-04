/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 04:46 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int num1, num2, num3, suma, producto;
    printf("Ingresa 3 numeros enteros\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num3>=0){
        suma=num1+num2+num3;
        printf("%d + %d + %d = %d\n", num1, num2, num3, suma);
    }else{
        producto=num1*num2*num3;
        printf("%d x %d x %d = %d\n", num1, num2, num3, producto);
    }

    return (EXIT_SUCCESS);
}

