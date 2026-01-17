#include <iostream> 
using namespace std;
void MaxSubarray(int *arr, int n) {
    int y = 0;
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            int x = 0;
            for (int i = start; i <= end; i++) {
                x += arr[i];
            }
            y = max(y,x);
        }
    }
    cout << y;
}

int main () {
    int arr[6] = {2,-3,6,5,-4,2};
    int n =6;

    MaxSubarray(arr,n);
    return 0;
}