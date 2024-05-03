#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int lastA = -69;
    int lastB = -69;

    int prevA = 0;
    int prevB = 0;

    int scoreA = 0;
    int scoreB = 0;

    for (int i = 0; i < n; i++) {
        int t, a, b;
        cin >> t >> a >> b;

        if (a <= 4) {
            scoreA += 100;

            if (t - lastA <= 10 && prevA == a) {
                scoreA += 50;
            }
            lastA = t;
            prevA = a;
        } else {
            scoreB += 100;

            if (t - lastB <= 10 && prevB == a) {
                scoreB += 50;
            }
            lastB = t;
            prevB = a;
        }
    }

    cout << scoreA << ' ' << scoreB << endl;

    return 0;
}