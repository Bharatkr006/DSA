#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    for (int i = n; i > 1; i--) {
        f = f * i;
    }

    cout << "The Factorial is : " << f;
    return f;
}

int main() {
    int n;
    cout << "Enter integer to calculate Factorial :";
    cin >> n;

    if (n == 0 || n == 1) {
        cout << "The Factorial is : 1";
    }
    else {
        fact(n);
    }
}