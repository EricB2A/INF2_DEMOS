#include <stdio.h>
#include <stdlib.h>

typedef int* PTR;
typedef const int* PTR_SUR_CST;

/**
 * Si on fait :
 * typedef int ENTIER;
 * static ENTIER n = 1; -> FAAAAAAAAAAUX
 * const ENTIER n = 1;  -> Sainte Marie Joseph, c'est juste
 * unsigned ENTIER n = 1; -> faux
 * 
 */
int main(void){
   int n = 1, m = 1;
   /**
    * le POINTEUR est cosntant
    */
   const PTR ptr1 = &n; // !! pas d'équivalent à const* main à int* const
   // ptr = &m;  // error: assignment of read-only variable 'ptr1'

   const int A = 1, B = 1;
   PTR_SUR_CST ptr2 = &A;
   ptr2 = &B;

   return EXIT_SUCCESS;
}