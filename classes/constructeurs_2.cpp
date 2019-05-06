#include <iostream>
using namespace std;
class B{
    public:
    B(){ // nécessaire
        /*
            On aurait pu utiliser le default, sauf que default 
            n'as pas de corps.
        */
        cout << "Appel du constructeur sans paramètrea" << endl;
    }
    B& operator=(const B& b){
        cout << "Appel opérateur= " << endl;
        n = b.n;
        return *this;
    }
    B(int n) : n() {};
    private:
    int n;
};
class A {
    public:
    A(const B& obj){
        // on a besoin de this car paramètre porte même nom que propriété
        this->obj = obj;
    } // si affectation
    private:
    B obj;
};

int main(){
    /*


    */
    B b(1);
    A a(b);
    return 0;
}