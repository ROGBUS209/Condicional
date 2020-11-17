/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain For.c
 * Author: Berenice
 *
 * Created on 17 de noviembre de 2020, 12:40 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int i = 1;
    int k = 1;
    int j = 10;
    int l = 10;
    for (i = 1; i <= j; i++){
        for(k = 1; k <= l; k++)
        printf("%d X %d = %d\n",i,k,i*k);
        
    }
    
        
    

    return (EXIT_SUCCESS);
}

