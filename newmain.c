/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Berenice
 *
 * Created on 8 de noviembre de 2020, 10:51 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    float a =225;
    float b = 100;
    float c = 15;
    float d = 2500; 
    //bloques para el verdadero, y el posiblemente falso
    if(a > b, a > c, a > d ){
        printf("a es mayor");
    } else 
    if(b > a, b > c, b > d){
        printf("b es mayor");
    } else 
    if (c > a, c > b, c > d ){ 
        printf("c es mayor");
    } else
    if (d > a, d > b, d > c){
        printf("d es mayor");
    }
    return (0);
}

