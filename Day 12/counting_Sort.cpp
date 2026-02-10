#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int arr[n] = {1,4,1,3,2,4,3,7};
    int freq_counter[n] = {0};

    for(int i = 0; i < n; i++) {
        freq_counter[arr[i]]++;
    }
    cout << "Frequency of elements:\n";
    for(int i = 0; i < n; i++) {
        cout << i << " -> " << freq_counter[i] << endl;
    }
}