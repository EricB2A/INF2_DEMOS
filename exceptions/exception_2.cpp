/*
   Première variante : traitement partielle de l'erreur
      - On doit faire un throw explicite

   Deuxième version : function try block
      - Le throw est envoyé automatiquement

   Troisième version : dans certains cas on ne peut pas s'en passer.
      - Try block utile que pour constructeur avec liste d'initialisation
      - Si on a une seule classe avec liste d'initialisation, ballec
      - Si on a une hiérarchie de classe, alors il faut un function try blocl 
        Si on veut faire un traitement local de l'exception, bien évidemment.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

// Première variante
class C {
   public:
   C(int n) : n(n) {
      /*
         On profite de la liste d'initialisation pour vérifier contenu des valeurs.
      */

      try{
         if(n <= 0 || n > 10) {
            throw -1;
         }
      }catch (int) {
         /*
            Je veux affichre une erreur
            Je veux propager l'exception
            Traitement locale de l'exception
         */
         // return; // possible
         cout << "argument invalide \n";
         throw; // a faire explicitement

      }
   }
   private:
   int n; // 1..10
};

int main(){
   /*
      Simulation du mauvais message.

   */
   try{
      C c1(10);
   }catch(int){
      cout << "bye bye" << endl;
   }

   return EXIT_SUCCESS;
}

// Deuxième variante
class C {
   C(int n)
   try : n(n){ // fonction try block
      if(n <= 0 || n > 10) {
            throw -1;
         }
   }catch(int){
      cout << "argument invalide" << endl;
      // throw implicite, envoyé directement à l'appelant.
      // return lèverait une erreur (cour-circuit de ce que l'on fait)
   }
   private:
   int n;
};


//Troisième variante
class A {
   public:
   A(int x) : x(x) {
      if(x <= 0){
         throw 1;
      }
   }
   private:
   int x;
};

class B : public A { // héritage, B hérite de A.
   public:
   B(int x)
   try : A(x) {
   }catch(int){
      cerr << "constructiond de A a merdé." << endl;
   }
};


int main(){
   try{
      B b(0);
   }catch(int){
      cout << "Oups" << endl;
   }
}