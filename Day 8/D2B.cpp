#include <iostream>
using namespace std;

int main () {
    int n,m;
    int dec = 1;
    int ans = 0;
    cout << "Enter Decimal number : " ;
    cin >> n;

    for (int i = 0; n > 0; i++) {
        m = n%2;
        ans = ans + m*dec;
        dec *= 10;
        n = n / 2;
    }
    cout <<"The Binary number is : " << ans;
    return 0;
}