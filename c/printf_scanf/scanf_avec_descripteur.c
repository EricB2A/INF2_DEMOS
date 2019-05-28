#include <stdlib.h>
#include <stdio.h>

int main(void){
   int n = -1;

   printf("Entrez un entier (èar ex 10, 012(oct) ou 0xA(hex)): ");
   scanf("%i", &n);
   printf("vous avez saisi la valeur %i\n", n);

   return EXIT_SUCCESS;
}