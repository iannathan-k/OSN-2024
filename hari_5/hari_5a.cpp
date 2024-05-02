#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

long long expo(long long a, long long b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    long long ans = 1;
    if (b % 2 == 1) ans = a;
    long long temp = expo(a, b/2);
    ans = (ans * temp) % MOD;
    ans = (ans * temp) % MOD;
    return ans;
}

int main() {
    int n, a, b;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << expo(a, b) << endl;
    }

    return 0;
}