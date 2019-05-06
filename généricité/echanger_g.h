#ifndef ECHANGER_G
#define ECHANGER_G

/*
    Je cache rien.
*/

template <typename T>
void echanger(T& a, T& b){
    T c = a;
    a = b;
    b = c;
}

#endif