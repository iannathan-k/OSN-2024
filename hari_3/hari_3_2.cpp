#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    int a[n];
    for (int i = n - 1; i >= 0; i++) {
        cin >> a[i];
    }
    
    int count = 0;

    for (int i = 0; i < (1<<n); i++) {
        int sum = 0;

        for (int j = 0; j < n; j++) {
            if (i&(1<<j)) {
                sum += a[i];
            }
        }
    }

    if (count % x == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;

}