/*
   Ici on cherche a prouver qu'une exception est passée par référence. 
   Et donc que le passage par paramètre n'est pas le même que pour les foncitons.
*/

#include <iostream>
#include <cstdlib>
using namespace std;


/*
   Quand on lève une exception, on passe une copie de l'exception.
   Ici on fait une incrémentation locale de valeur.
*/
int main () {
   int c = 1;
   try {
      // lève exception de type entière
      throw c;
   }catch(int& valeur){ 
      // const int& valeur ou const int ne serait pas permis car on modifie valeur dans catch.
      valeur++;
      cout << "Dans le crash : " << valeur << endl; // Affichera 2

   }
   cout << "Apres le crash : " << c << endl; // Affichera 1

   return EXIT_SUCCESS;
}

/*
   Ici on passe un pointeur sur c, ce qui nous permis d'accéder à l'orignale de l'exception
   - On le fait rarement. Mais on peut le faire (vu en cours qu'on passe une copie).
*/
int main(){
   int c = 1;
   try {
      throw &c;
   }catch(int* valeur){ // reçoit une adresse
      // déréférencer 
      (*valeur)++;
      cout << "Dans le catch : " << *valeur << endl; // Affichera 2
   }

   cout << "Apres le crash : " << c << endl;
   return EXIT_SUCCESS;
}


/*

*/
int main(){
   int c = 1;
   try{
      int* ptr = &c;
      throw ptr;
      cout << ptr << endl;
      throw ptr;
   }catch(int* valeur){
      cout << valeur << endl;
      (*valeur)++;
   }

   return EXIT_SUCCESS;
}


/*
   Pour les fonction, param par référence : une variable du type exact attendu.
      -  On ne pourrait pas passer une constante.
   Cpdt, avec les catch, c'est possible ! 

*/
int main(){
   const int C = 1;
   try{
      throw C;
   }catch(int& valeur){
      cout << "dans le catch : " << ++valeur << endl; // Affichera 2
   }
   cout << "Apres le catch : " << C << endl; // Affichera 2 

   return EXIT_SUCCESS;
}