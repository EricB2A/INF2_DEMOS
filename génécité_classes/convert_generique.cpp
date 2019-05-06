

template <typename T> class CVector;

template <typename T>
ostream& operator<<(ostream& os, const CVector<T>& cv);

template <typename T>
class CVector {
    friend ostream& operator<< <>(ostream& os, const CVector& cv);
    public:
    CVector(T x, T y) : x(x), y(y) {}
    template <typename U> CVector<U> convert() const;
    private:
    T x,y;
}

template <typename T>
ostream& operator<<(ostream& os, const CVector<T>& cv){
    return os << "(" << cs.x << ", " << cv.y << ")";
}

template <typename T> template <typename U>
CVector<U> CVector<T>::convert() const{
    return CVector<U>((U)x, (U)y);
}

int main(){

    const CVector<char> CVC('A', 'B');
    cout << CVC << endl;
    CVector<int> cvi = CVC.convert<int>();
    cout << cvi << endl;
}