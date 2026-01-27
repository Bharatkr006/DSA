#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int a = 1; a < n; a++) {
        for(int i = n-i; i >= 0; i--) {
            cout << " ";
        }
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}