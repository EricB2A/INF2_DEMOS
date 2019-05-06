#include <stdlib.h>
#include <stdio.h>

#define MAC

int main(void){
   // #if 0
   #ifdef WINDOWS // écriture 1
      printf("Compilatin windows \n");
   #elif defined MAC // écriture 2
      printf("Compilatin windows \n");
   #elif defined(LINUX) // écriture 3
      printf("Compilatin windows \n");
   #else
      #error No operating system
   #endif
   // #endif 
   return EXIT_SUCCESS;
}