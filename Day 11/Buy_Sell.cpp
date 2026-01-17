#include <iostream>
using namespace std;

void MaxProfit(int *prices, int n) {
    int BestBuy [100000];
    BestBuy [0] = 99999;
    for (int i = 1; i < n; i++) {
        BestBuy [i] = min(BestBuy[i-1], prices[i-1]);
    }

    int MaxProfit = 0;
    for (int i = 0; i < n; i++) {
        int CurrProfit = prices[i] - BestBuy[i];
        MaxProfit = max(MaxProfit, CurrProfit);
    }
    cout << MaxProfit;
    cout << endl;
}

void Sell(int *prices, int n) {
    int min = 0;
}

int main() {
    int prices[6] = {7,1,5,3,6,4};
    int n = 6;

    MaxProfit(prices, n);
    return 0;
}