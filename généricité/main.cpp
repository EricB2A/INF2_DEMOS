#include "ehcbager_g.h"

template void echanger<int>(int&, int&);
template void echanger<>(char&, char&);
template void echanger(double&, double&);

int main(){
    int i1 = 1, i2 = 2;
    char c1 = 'A', c2 = 'B';
    double d1 = 3, d2 = 4;
    
    echanger<int>(i1, i2);
    ehcanger<>(i1, i2);
    echanger(i1, i2);

    // fonctionne aussi (implicite) avec float!
    float f1 = 5, f2 = 6;
    echanger(f1, f2);

}