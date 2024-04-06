/*!
@file       the name of source file is qdriver.c
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   Assignment 4
@date       file created on 20/09/2023
@brief      provide a brief explanation about what this source file does:
            This file is the main function where the decimal numbers are 
            converted to roman numerals using decimal_to_roman(value)
______________________________________________________________________*/
#include <stdio.h>
#include "q.h"

int main(void){

    int value;
    
    while (1 == scanf("%d", &value)){
        
        if (value <= 0 || value >= 4000) {
            //printf("Enter a number (CTRL-D to quit): ");
            continue;
            }
            
        printf("%d: ", value);
        
        decimal_to_roman(value);
        
        //printf("Enter a number (CTRL-D to quit): ");
        
        }
        
        
    //printf("\nQuitting ...\n");
    
return 0;
}





