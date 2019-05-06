#include <iostream>
using namespace std;

class C {
    public:

    // champs usuels
    int n = 1;
    double d = 2.0;

    // champs usuels constants
    const int k = 3;
    const double v = 4.0;

    // champs static 
    static int m; // initialisaiton explicite interndite

    // champs static constants
    const static int M = 7; // ok seulement pour entiers.
    // const static double P = 7; // lève une erreur
};

int C::m = 5;
int main(){

    C c;

    return 0;
}