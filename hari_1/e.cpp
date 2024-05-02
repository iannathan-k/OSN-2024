#include <iostream>
using namespace std;

int main() {
    int n, k, m;
    cin >> n;
    cin >> k;
    cin >> m;

    int scores[n - 1];
    for(int i = 0; i < n - 1; i++) {
        cin >> scores[i];
    }

    int total = 0;
    for(int i = 0; i < n - 1; i++) {
        total += scores[i];
    }

    int e = n * m - total;
    if (e > k) {
        cout << -1;
    } else if (e < 0) {
        cout << 0;
    } else {
        cout << e;
    }

    return 0;
}