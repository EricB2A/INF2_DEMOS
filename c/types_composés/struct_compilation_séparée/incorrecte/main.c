#include <stdlib.h>
#include "s.h"

int main(void){
   afficher(&(T){1}); // error: invalid use of incomplete typedef 'T'
   return EXIT_SUCCESS;
}