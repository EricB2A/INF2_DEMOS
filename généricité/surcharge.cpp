#include <iostream>
#include <cmath>
using namespace std;

class Double{
    friend ostream& operator<<(ostream& os, const Double& d);
    public:
        explicit Double(double x) : x(x) {}

        /*
            Surchage de l'opérator int.
            Grâce à cet opérator, on prend un double qu'on peut 
            convertir en int. 
            Aucune valeur de retour.
        */
        operator int();

        /*
            Surcharge de l'opérateur de parenthèses.
            foncteur => on utilise objet comme fonction.
        */
        double operator()(int n);
    private:
        double x;
};

ostream& operator<<(ostream& os, const Double& d){
    return os << d.x;
}

Double::operator int(){
    return (int) x;
}

double Double::operator()(int n){
    return pow(x, n);
}

int main(){

    double d(1.5);
    cout << d << endl;
    int n = (int) d;
    cout << n << endl;
    cout << d(3) << endl;

    return 0;
}