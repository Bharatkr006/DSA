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

    int start = 0; int end = n-1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] <<endl;
    }
}