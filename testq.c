/*!
@file       the name of source file is q.c
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   Assignment 4
@date       file created on 20/09/2023
@brief      provide a brief explanation about what this source file does:
            This file is the function definiction where the integer numbers are 
            converted to roman numerals using decimal_to_roman(value)
______________________________________________________________________*/

// You should document [not necessary for grading but an excellent habit
// to acquire] your implementation of function decimal_to_roman to aid
// in debugging and maintenance not only by yourself but by others in
// your software development team ...

// Remember, the function-level documentation header in q.h is primarily
// meant for your clients. The documentation header here is primarily for
// use by you [and other on your team] solely to aid maintenance and
// debugging tasks ...

// @todo: Add necessary C standard library headers here ...

// @todo: Provide the definition of function decimal_to_roman that
// matches the declaration in q.h ...



#include <stdio.h>
#include <string.h>
#include "q.h"


void decimal_to_roman(int v){

    int value = v, a= 0;
    //char roman_val[100];


    if(value >= 1000){                                     // value >= 1000, line will execute if value iS 1000, then 1000 is subtracted from value and appends "M" to  roman_val
        a = value/1000;
        value -=1000*a;
        for(int i =0; i !=a;i++){
            printf("M");
            }
    }
    else if(value >= 900){                                  // value >= 900, line will execute if value iS 900, then 900 is subtracted from value and appends "CM" to  roman_val
        a = value/900;
        value -=900*a;
        for(int i =0; i !=a;i++){
            printf("CM");
            }
    }

    else if(value >= 500){                                  // value >= 500, line will execute if value iS 500, then 500 is subtracted from value and appends "D" to  roman_val
        value -=500;
        printf( "D");
    }
    else if(value >= 400){                                  // value >= 400, line will execute if value is 400, then 400 is subtracted from value and appends "CD" to  roman_val
        value -=400;
        printf("CD");
    }
    else if(value >= 100){                                  // value >= 100, line will execute if value is 100, then 100 is subtracted from value and appends "C" to  roman_val

        value -=100;
        printf("C");
    }
    else if(value >= 90){                                  // value >= 90, line will execute if value is 90, then 900 is subtracted from value and appends "XC" to  roman_val

        value -=90;
        printf("XC");
    }
    else if(value >= 50){                                  // value >= 50, line will execute if value is 50, then 50 is subtracted from value and appends "L" to  roman_val

        value -=50;
        printf("L");
    }
    else if(value >= 40){                                  // value >= 40, line will execute if value is 40, then 40 is subtracted from value and appends "XL" to  roman_vale

        value -=40;
        printf("XL");
    }
    else if(value >= 10){                                  // value >= 10, line will execute if value is 10, then 10 is subtracted from value and appends "X" to  roman_val

        value -=10;
        printf("X");
    }
    else if(value >= 9){                                  // value >= 9, line will execute if value is 9, then 9 is subtracted from value and appends "IX" to  roman_val

        value -=9;
        printf("IX");
    }
    else if(value >= 8){                                  // value >= 8, line will execute if value is 8, then 8 is subtracted from value and appends "VIII" to  roman_val

        value -=8;
        printf("VIII");
    }
    else if(value >= 7){                                  // value >= 7, line will execute if value is 7, then 7 is subtracted from value and appends "VII" to  roman_val

        value -=7;
        printf("VII");
    }
    else if(value >= 6){                                  // value >= 6, line will execute if value is 6, then 6 is subtracted from value and appends "VI" to  roman_val

        value -=6;
        printf("VI");
    }
    else if(value >= 5){                                  // value >= 5, line will execute if value is 5, then 5 is subtracted from value and appends "V" to  roman_val

        value -=5;
        printf("V");
    }
    else if(value >= 4){                                  // value >= 4, line will execute if value is 4,then 4 is subtracted from value and appends "IV" to  roman_val

        value -=4;
        printf("IV");
    }
    else if(value >= 1){                                  // value >= 1, line will execute if value is 1, 1 is subtracted from value and appends "I" to  roman_val

        value -=1;
        printf("I");
    }
    else{
        printf("\n\nerror\n\n");                        // prints error if there is a unknown value
    }

    printf("\n");
    //printf("%s\n", roman_val);
    //memset(roman_val, '\0', sizeof(roman_val)); 

}
