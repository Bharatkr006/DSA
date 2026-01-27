#include <iostream>
using namespace std;

int BubbleSort (int *arr, int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr [j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main () {
    int arr[5] = {2,4,1,6,7};
    int size = 5;

    BubbleSort(arr, size);
}