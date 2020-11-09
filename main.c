/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Berenice
 *
 * Created on 8 de noviembre de 2020, 01:38 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    float a =225;
    float b = 100;
    float c = 15;
    //bloques para el verdadero, y el posiblemente falso
    if(a > c, a > b ){
        printf("a es mayor");
    } else 
    if(b > a, b > c){
        printf("b es mayor");
    } else 
    if (c > a, c > b){ 
        printf("c es mayor");
    } 
    

    return (0);
}
// bloque definido por parentesis -- la implementacion de una función 

