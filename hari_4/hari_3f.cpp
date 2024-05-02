#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    long long arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long sum = 0;

    for (int i = 1; i < n + 1; i++) {
        long long sum1 = 0;
        for (int j = 1; j < n + 1; j++) {
            long long sum2 = 0;
            for (int k = 1; k < n + 1; k++) {
                sum2 += (arr[i]&arr[j]) * (arr[j]|arr[k]);
            }
            sum1 += sum2;
        }
        sum += (long long) (sum1 % (long long) 1000005040);

        cout << sum << endl;
    }

    cout << sum;

    return 0;
}