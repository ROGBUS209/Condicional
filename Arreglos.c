/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arreglos.c
 * Author: Berenice
 *
 * Created on 23 de noviembre de 2020, 01:38 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int arreglo[100];
    int x = 99;
    arreglo[0]  = 2;
    arreglo[1]  = 3;
    arreglo[2]  = arreglo[0]+arreglo[1];
    arreglo[3]  = arreglo[1]+arreglo[2];
    arreglo[4]  = arreglo[2]+arreglo[3];
    arreglo[5]  = arreglo[3]+arreglo[4];
    arreglo[6]  = arreglo[4]+arreglo[5];
    arreglo[7]  = arreglo[5]+arreglo[6];
    arreglo[8]  = arreglo[6]+arreglo[7];
    arreglo[9]  = arreglo[7]+arreglo[8];
    arreglo[10] = arreglo[8]+arreglo[9];
    arreglo[11] = arreglo[9]+arreglo[10];
    arreglo[12] = arreglo[10]+arreglo[11];
    arreglo[13] = arreglo[11]+arreglo[12];
    arreglo[14] = arreglo[12]+arreglo[13];
    arreglo[15] = arreglo[13]+arreglo[14];
    arreglo[16] = arreglo[14]+arreglo[15];
    arreglo[17] = arreglo[15]+arreglo[16];
    arreglo[18] = arreglo[16]+arreglo[17];
    arreglo[19] = arreglo[17]+arreglo[18];
    arreglo[20] = arreglo[18]+arreglo[19];
    arreglo[21] = arreglo[19]+arreglo[20];
    arreglo[22] = arreglo[20]+arreglo[21];
    arreglo[23] = arreglo[21]+arreglo[22];
    arreglo[24] = arreglo[22]+arreglo[23];
    arreglo[25] = arreglo[23]+arreglo[24];
    arreglo[26] = arreglo[24]+arreglo[25];
    arreglo[27] = arreglo[25]+arreglo[26];
    arreglo[28] = arreglo[26]+arreglo[27];
    arreglo[29] = arreglo[27]+arreglo[28];
    arreglo[30] = arreglo[28]+arreglo[29];
    arreglo[31] = arreglo[29]+arreglo[30];
    arreglo[32] = arreglo[30]+arreglo[31];
    arreglo[33] = arreglo[31]+arreglo[32];
    arreglo[34] = arreglo[32]+arreglo[33];
    arreglo[35] = arreglo[33]+arreglo[34];
    arreglo[36] = arreglo[34]+arreglo[35];
    arreglo[37] = arreglo[35]+arreglo[36];
    arreglo[38] = arreglo[36]+arreglo[37];
    arreglo[39] = arreglo[37]+arreglo[38];
    arreglo[40] = arreglo[38]+arreglo[39];
    arreglo[41] = arreglo[39]+arreglo[40];
    arreglo[42] = arreglo[40]+arreglo[41];
    arreglo[43] = arreglo[41]+arreglo[42];
    arreglo[44] = arreglo[42]+arreglo[43];
    arreglo[45] = arreglo[43]+arreglo[44];
    arreglo[46] = arreglo[44]+arreglo[45];
    arreglo[47] = arreglo[45]+arreglo[46];
    arreglo[48] = arreglo[46]+arreglo[47];
    arreglo[49] = arreglo[47]+arreglo[48];
    arreglo[50] = arreglo[48]+arreglo[49];
    arreglo[51] = arreglo[49]+arreglo[50];
    arreglo[52] = arreglo[50]+arreglo[51];
    arreglo[53] = arreglo[51]+arreglo[52];
    arreglo[54] = arreglo[52]+arreglo[53];
    arreglo[55] = arreglo[53]+arreglo[54];
    arreglo[56] = arreglo[54]+arreglo[55];
    arreglo[57] = arreglo[55]+arreglo[56];
    arreglo[58] = arreglo[56]+arreglo[57];
    arreglo[59] = arreglo[57]+arreglo[58];
    arreglo[60] = arreglo[58]+arreglo[59];
    arreglo[61] = arreglo[59]+arreglo[60];
    arreglo[62] = arreglo[60]+arreglo[61];
    arreglo[63] = arreglo[61]+arreglo[62];
    arreglo[64] = arreglo[62]+arreglo[63];
    arreglo[65] = arreglo[63]+arreglo[64];
    arreglo[66] = arreglo[64]+arreglo[65];
    arreglo[67] = arreglo[65]+arreglo[66];
    arreglo[68] = arreglo[66]+arreglo[67];
    arreglo[69] = arreglo[67]+arreglo[68];
    arreglo[70] = arreglo[68]+arreglo[69];
    arreglo[71] = arreglo[69]+arreglo[70];
    arreglo[72] = arreglo[70]+arreglo[71];
    arreglo[73] = arreglo[71]+arreglo[72];
    arreglo[74] = arreglo[72]+arreglo[73];
    arreglo[75] = arreglo[73]+arreglo[74];
    arreglo[76] = arreglo[74]+arreglo[75];
    arreglo[77] = arreglo[75]+arreglo[76];
    arreglo[78] = arreglo[76]+arreglo[77];
    arreglo[79] = arreglo[77]+arreglo[78];
    arreglo[80] = arreglo[78]+arreglo[79];
    arreglo[81] = arreglo[79]+arreglo[80];
    arreglo[82] = arreglo[80]+arreglo[81];
    arreglo[83] = arreglo[81]+arreglo[82];
    arreglo[84] = arreglo[82]+arreglo[83];
    arreglo[85] = arreglo[83]+arreglo[84];
    arreglo[86] = arreglo[84]+arreglo[85];
    arreglo[87] = arreglo[85]+arreglo[86];
    arreglo[88] = arreglo[86]+arreglo[87];
    arreglo[89] = arreglo[87]+arreglo[88];
    arreglo[90] = arreglo[88]+arreglo[89];
    arreglo[91] = arreglo[89]+arreglo[90];
    arreglo[92] = arreglo[90]+arreglo[91];
    arreglo[93] = arreglo[91]+arreglo[92];
    arreglo[94] = arreglo[92]+arreglo[93];
    arreglo[95] = arreglo[93]+arreglo[94];
    arreglo[96] = arreglo[94]+arreglo[95];
    arreglo[97] = arreglo[95]+arreglo[96];
    arreglo[98] = arreglo[96]+arreglo[97];
    arreglo[99] = arreglo[97]+arreglo[98];
    
    for (x;x<=100;x=x+1){
    printf("ingresa un valor");
    scanf("%d",&x);
    printf("%d\n",arreglo[x]);   
    if(arreglo[x]<100)
    printf("ingresa otro valor");
    scanf("%d",&x);
    printf("%d\n",arreglo[x]);    
    }
    return (0);
    
}

