#include <iostream>
using namespace std;

int SelectionSort (int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            swap(arr[j], arr[minIndex]);
        }
    }
    for (int i = 1; i < n; i++) {
        cout << arr[i] << " ";
    }
    
}

int main () {
    int arr[5] = {2,4,1,6,7};
    int n = 5;

    SelectionSort(arr, n);
}