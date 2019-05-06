#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <inttypes.h>

#define SIZEOF(TYPE) \
printf("sizeof("#TYPE")  = %" PRIuMAX "\n", (uintmax_t) sizeof(TYPE))

int main(void){

   SIZEOF(bool);
   SIZEOF(char);
   SIZEOF(short);
   SIZEOF(int);
   SIZEOF(int*);
   SIZEOF(long);
   SIZEOF(long long);
   SIZEOF(float);
   SIZEOF(double);
   SIZEOF(long double);

   int i = 1;
   printf("\ni ? %d\n", i)
   SIZEOF(++i);

   /**
    * NOTES : 
    * sizeof fonctionne avec une expression.
    * n'exécute pas l'expression en question
    * 
    */
}