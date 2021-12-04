#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

int main(void) {

    // get_str 
    string s = malloc(sizeof(char));
    get_string(s,"please give a string :");
    printf("string = %s \n", s);

    // get_int 
    int val1 = get_int("please give an int :");
    printf("int = %d \n",val1);

    // get long
    long val2 = get_long("please give a long :");
    printf("long = %li \n",val2);

    // float
    float val3 = get_float("please give me a float :");
    printf("float = %f \n",val3);

    // double 

    double val4 = get_double("please give a double :");
    printf("double = %lf \n",val4);

   return 0;
   
}