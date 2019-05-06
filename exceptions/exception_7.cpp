#include <cstdlib>
#include <iostream>
using namespace std;

class Obj{
   public:
   Obj(int n) : n(n){}

   ~Obj(){
      cout << "Appel du destructeur de Ovbj" << endl;
      // on ne devrait pas faire un throw dans un destructeur
      throw 1; 
   }
   private:
   int n;

};

void f(){
   Obj o(1);
   cout << "Appel de f()" << endl;
   throw 2;
}

void onTerminate(){
   cout << "onTerminate() " << endl;
   exit(EXIT_FAILURE); // quitte le programme sans crash
}

int main(){
   set_terminate(onTerminate);
   try{
      f();

   }catch(...){
      // on arrive jamais ici
      // le terminate arrive à cause du trhow du detrucreur
      cout << "Une exception est survenue " << endl;
   }
   return EXIT_SUCCESS;
}


/*

   Appel de f()
   Appel du destructeur de Obj
   onTerminate()

*/