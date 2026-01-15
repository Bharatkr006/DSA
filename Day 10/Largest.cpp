#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter length of Array: ";
    cin >> n;
    int arr[n];
    

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr [i];
        }
    }
    cout << "The maximum valuve in array is: " << max;
}