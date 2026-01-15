#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter number of inputs: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> arr[i];
    }

    int RevArr[n];
    for (int i = 0; i < n; i++) {
        RevArr[n-1-i] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << RevArr[i] << endl;
    }
}