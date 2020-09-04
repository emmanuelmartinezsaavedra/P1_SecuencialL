/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 4 de septiembre de 2020, 03:58 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int num1, num2, num3;
    
    printf("Ingresar los 3 numeros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(num1>num2){
        if(num1>num3){
            printf("%d es el numero mayor\n", num1);
            if(num3>num2){
                printf("%d es el numero mediano\n", num3);
                printf("%d es el numero menor\n", num2);
            }else{
                printf("%d es el numero mediano\n", num2);
                printf("%d es el numero menor\n", num3);
            }
        }else{
            printf("%d es el numero mayor\n", num3);
            if(num1>num2){
                printf("%d es el numero mediano\n", num1);
                printf("%d es el numero menor\n", num2);
            }else{
                printf("%d es el numero mediano\n", num2);
                printf("%d es el numero menor\n", num1);
            }
        }
    }else
        if(num2>num3){
            printf("%d es el numero mayor\n", num2);
            if(num3>num1){
                printf("%d es el numero mediano\n", num3);
                printf("%d es el numero menor\n", num1);
            }else{
                printf("%d es el numero mediano\n", num1);
                printf("%d es el numero menor\n", num3);
            }
                  
        }else{
            printf("%d es el numero mayor\n", num3);
            printf("%d es el numero mediano\n", num2);
            printf("%d es el numero menor\n", num1);
        }

    return (EXIT_SUCCESS);
}

