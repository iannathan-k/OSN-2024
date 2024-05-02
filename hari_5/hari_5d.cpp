#include <iostream>
#include <numeric>
using namespace std;

int cookies(int n, int k, int have[], int need[], int want, int left, int right) {
    int sum;
    for (int i = 0; i < n; i++) {
        int label = need[i] * want;
        if (label > have[i]) {
            sum = label - have[i];
        }

        cout << "MID " << ((long long) left + right) / 2 << endl;
        cout << "LEFT " << right << endl;
        cout << "RIGHT " << left << endl;
        cout << "SUM " << sum << endl;

        if (left == right) {
            return right;
        }

        if (sum > k) {
            return cookies(n, k, have, need, ((long long) left + right) / 2, left, want);
        } else if (sum < k) { 
            return cookies(n, k, have, need, ((long long) left + right) / 2, right, want);
        } else {
            return want;
        }

    }
}

int main() {

    int n, k;
    cin >> n >> k;

    int have[n], need[n];

    for (int i = 0; i < n; i++) {
        cin >> need[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> have[i];
    }

    cout << cookies(n, k, have, need, 1e9, 0, 2e9);

    return 0;
}