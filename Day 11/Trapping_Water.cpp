#include <iostream>
using namespace std;

int MaxWater (int *arr, int n) {
    int result = 0;

    //outer loop
    for (int i = 0; i < n-1; i++) {
        int left = arr[i];
        for (int j = 0; j < i; j++) {
            left = max(left, arr[j]);
        }
        int right = arr[i];
        for (int j = i+1 ; j < n; j++) {
            right = max(right, arr[j]);
        }
        result += (min(left,right) - arr[i]);
    }
    cout << result;
}

int main () {
    int n = 6;
    int arr[n] = {4,2,0,6,3,2};

    MaxWater(arr, n);
    return 0;
}