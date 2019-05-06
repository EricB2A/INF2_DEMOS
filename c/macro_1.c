#include <stdlib.h>
#include <stdio.h>

#define STR(X) #X
#define F(N) STR(Fichier_##N)

int main(void){
   const char* tab[] = {F(1), F(2), F(3)};

   for(size_t i = 0; i < 3; ++i){
      printf("%s\n", tab[i]);
   }

   return EXIT_SUCCESS;
}

// #define F(N) "Fichier_"#N

#define F(N) "Fichier_"#N
int _main(void){
   const char* tab[] = {F(1), F(2), F(3)};

   for(size_t i = 0; i < 3; ++i){
      printf("%s\n", tab[i]);
   }

   return EXIT_SUCCESS;
}