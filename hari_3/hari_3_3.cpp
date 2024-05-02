#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int arr[n];

    for (int i = 0; i < (1<<n); i++) {
        for (int j = 0; j < n; j++) {
            if (i&(1<<j)) {
                arr[j] = a[j];
            } else {
                arr[j] = 0;
            }
        }

        for (int k = 0; k < (1<<(sizeof(arr)/sizeof(arr[0]))); k++) {
            int sum = 0;
            for (int l = 0; l < n; l++) {
                if (k&(1<<l)) {
                    arr[l] = arr[l] * arr[l];
                }
                sum += arr[l];
            }

            if (sum == x) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}