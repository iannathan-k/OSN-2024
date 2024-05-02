#include <iostream>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;

    long long health[n];

    for(int i = 0; i < n; i++) {
        cin >> health[i];
    }

    for(int i = 0; i < k; i++) {
        int high = 0;
        for (int j = 0; j < n; j++) {
            if (health[j] == 0) {
                continue;
            }
            if(health[j] > health[high]) {
                high = j;
            }
        }
        health[high] = 0;
    }

    long long total = 0;
    for(int i = 0; i < n; i++) {
        total += health[i];
    }

    cout << total;

    return 0;
}