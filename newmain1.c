/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain1.c
 * Author: Berenice
 *
 * Created on 9 de noviembre de 2020, 04:34 PM
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    int N = 5;
    int n = 3;
    // N = 0, 1, 1, 2, 3, 5, 8
    while(N<=6) {
        printf("N\n");
        N = N + n;  
    }
    printf("%d",N);
            
    

   return (EXIT_SUCCESS);
}

