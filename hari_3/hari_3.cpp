#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    int rset[n];

    for (int i = 0; i < n; i++) {
        cin >> rset[i];
    }

    for (int i = 0; i < (1<<n); i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i&(1<<j)) {
                sum += -rset[j];
            } else {
                sum += rset[j];
            }
        }

        if (abs(sum) % 360 == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}