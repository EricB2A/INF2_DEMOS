#include <stdio.h>
#include <stdlib.h>

typedef union {
   char c;
   int n;
   float f;
} U;

int main(void){
   U mon_u = {'A'};
   printf("%c\n", mon_u.c); // affichera A
   printf("%d\n", mon_u.n); // affichera 65
   printf("%g\n", mon_u.f); // affichera.. 9.10844e-044

   mon_u.f = 2.5f;
   printf("%g\n", mon_u.f); // affichera 2.5
   printf("%d\n", mon_u.n); // affichera.. 123213123

   /**
    * Apparamment, le premier champ (ici un char) fait foi !
    */
   U mon_u2 = {2.5f}; // warning: conversion to 'char' alters 'float' constant value
   printf("%g\n", mon_u2.f); // affichera.. 2.8026e-045
   printf("%d\n", mon_u2.n); // affichera.. 2

   U mon_u3 = {.f = 2.5f};   // pas de warning
   printf("%g\n", mon_u2.f); // affichera 2.5
   printf("%d\n", mon_u2.n); // affichera.. 123213123

   return EXIT_SUCCESS;
}