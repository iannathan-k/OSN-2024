#include <iostream>
using namespace std;

int main() {
    int room;
    int curtain;
    cin >> room;
    cin >> curtain;

    int remaining = room - 2 * curtain;
    if (remaining < 0) {
        remaining = 0;
    }

    cout << remaining;

    return 0;
}