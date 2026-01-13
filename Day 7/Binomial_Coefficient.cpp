#include <iostream>
using namespace std;

int BinomialCoefficient(int n,int r) {
    int N = 1;
    int R = 1;
    int NR = 1;
    for (int i = n; i > 1; i--) {
        N = N * i;
    }

    for (int i = r; i > 1; i--) {
        R = R * i;
    }

    for (int i = n-r; i > 1; i--) {
        NR = NR * i;
    }

    cout << "The Binomial Coefficient is : " << N/(R*NR);
    return N/(R*NR);
}

int main() {
    int n,r;
    cout << "Enter integer n:";
    cin >> n;
    cout << "Enter integer r:";
    cin >> r;

    BinomialCoefficient(n,r);
}