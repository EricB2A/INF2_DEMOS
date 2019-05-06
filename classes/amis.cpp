#include <iostream>
#include <vector>

using namespace std;

class C{
    friend ostream& operator<<(ostream& os, const C& c);
    public:
    C(int n) : n(n) {}
    C(const C& c) { cout << "constructeur de cope"; n = c.n;}
    C& operator==(const C& c){cout << "Appel op = \n"; n = c.n; return *this;}
    void setN(int n){this->n = n;}
    private:
    int n;
};

ostream& operator<<(ostream& os, const C& c){
    return os << "n = " << c.n;
}

using Vecteur1 = vector<C>;
using Vecteur2 = vector<C*>;

int main(){
    C c1(1);
    Vecteur1 v1;
    v1.push_back(c1);
    cout << c1 << endl;
    cout << v1.at(0) << endl;
    c1.setN(2);
    cout << c1 << endl;

    return 0;
}

