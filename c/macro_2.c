#include <stdlib.h>
#include <stdio.h>

#define FOO(X) do {f1(X); f2(X);} while(0)
//#define FOO(X) {f1(X); f2(X);}

void f1(int n){
   printf("Appel de f1(%d\n",n);
}

void f2(int n){
   printf("Appel de f2(%d\n",n);
}

int main(void){
   int n = 1;
   if(n==1){
      /**
       * sans le else, les 2 versios du #define plus haut sont ok
       * mais sans le else ce n'est pas le cas... à moins de supprimer
       * le ; après  FOO(1).. ce qui n'est pas intuitif
       */
      FOO(1); 
      /*
         En gros pour la deuxième version du #define, il faut enlever le ; de 
         l'appel de la fonction FOO(1)... Sauf qu'une fois on utilise, une fois pas.
         Donc on utiliser le do while(0);
      */
            
   }else{
      printf("blablabla\n");
   }
   return EXIT_SUCCESS;
}