#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    int exp = 1;
    int ans = 0;
    cout << "Enter Binary number :";
    cin >> n;

    for (int i = 0; n > 0; i++) {
        m = n%10;
        ans = ans + m*exp;
        n = n / 10;
        exp *= 2;
    }

    cout << ans;
    return 0;
}