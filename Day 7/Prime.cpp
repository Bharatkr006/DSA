#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if (n == 1) {
        return false;
    }
    
    for (int i = 2; i <= n-1; i++) {
        if (n%i == 0) {
            return false;
        }
        else {
            return true;
        }
    }
}

int main() {
    int n;
    cout << "Enter n to check prime or not: ";
    cin >> n;

    if (IsPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}