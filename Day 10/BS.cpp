#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter number of inputs : ";
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Enter value : ";
        cin >> arr[i];
    }
    
    int key;
    cout << "Enter Key to find : ";
    cin >> key;

    int start = 0, end = n-1;
    while (start <= end) {
        int mid = (start + end)/2;

        if (arr[mid] == key) {
            cout << key << " is at " << mid+1 << " index";
            return mid;
        }

        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
    }
}