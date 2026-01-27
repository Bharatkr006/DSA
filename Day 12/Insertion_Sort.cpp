#include <iostream>
using namespace std;

int InsertionSort (int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int curr = arr[i];
        int prev = i-1;
        
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr [prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    for (int i = 0; i <size; i++) {
        cout << arr[i] << " ";
    }
}

int main () {
    int arr[5] = {5,4,1,3,2};
    int size = 5;

    InsertionSort(arr, size);
}