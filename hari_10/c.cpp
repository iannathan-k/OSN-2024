#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int b[n];
    
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] + b[j] == 0) {
                total += 1;
                continue;
            }
            total += int(log10(abs(a[i] + b[j])) + 1);
        }
    }

    cout << total;

    return 0;
}