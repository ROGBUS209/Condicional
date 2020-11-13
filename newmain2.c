/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain2.c
 * Author: Berenice
 *
 * Created on 11 de noviembre de 2020, 05:18 PM
 */

#include <stdio.h>
#include <stdlib.h>


   int main(int argc, char** argv) {

       //1,2,3,4,5,6,7,8,9,10
       int X = 1;
       int Y = 1;
       int R = 10;
       int B = 10;
        while(X<=R){
            Y = 1;
           
           while(Y<=B){
           printf("%d X %d = %d\n",X,Y,X*Y);
           Y = Y + 1;
       }
       printf("================\n");
       X = X + 1;
        }
    return (EXIT_SUCCESS);
}

