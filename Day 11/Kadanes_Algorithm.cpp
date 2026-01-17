#include <iostream>
using namespace std;

void Kadanes_Algo(int *arr, int n) {
    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum;
}

int main() {
    int arr[6] = {2, -3, 6, 5, -4, 2};
    int n = 6;

    Kadanes_Algo(arr, n);
    return 0;
}