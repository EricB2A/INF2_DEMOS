/*

   Quand on travaille avec objet tout court -> pas de liaison direct.
   A.what() -> appelle méthode de A.
   Maintenant si à l'excétuion on veut appeler la méthode what() de B, il faut enclencher
   la liaison dynamique.
   On ne travaille plus avec des objets tout court, mais es pointeur mamène.
   Même chose que catch(exception& e) -> laison dynamique
                                      -> déclarer méthodes avec "virtual" 

*/

#include <iostream>
using namespace std;

class A {
   public:
   virtual const char* what() { // renvoie chaine à la C
      return "std::exception";
   }
};

class B : public A {
   public:
   B(const string& msg ="") : A() {
      this->msg = msg;
   }
   virtual const char* what(){
      return msg.c_str();
   }
   private:
   string msg;
};

class C : public B {
   public:
   C(const string& msg = "") : B(msg) {}
};


int main(){
   A a;
   cout << a.what() << endl; // std::exception

   B b("logic error");
   cout << b.what() << endl; // logic error

   C c("out of range");
   cout << c.what() << end;  // out of range

   a = b;
   cout << a.what() << endl; // std::exception (pas de polymorphisme)
                             // voir catch(exception) 

   b = c;      
   cout << b.what() << endl; // ouf of range (pas de polymorphisme)

   B bbis("logic error");
   A &ref = bbis;
   cout << ref.what() << endl; // logic error (polymorphisme)
                               //voir catch (exception&)

   A* ptr = new B(bbis);
   cout << ptr->what() << endl; // Logic error (polymorphisme)

   return EXIT_SUCCESS;
}

