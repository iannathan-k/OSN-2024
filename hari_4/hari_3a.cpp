#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    if (b == 4 || b == 7) {
        cout << "No";
        return 0;
    } else if (abs(a - b) > 1) {
        cout << "No";
        return 0;
    } else {
        cout << "Yes";
    }

    return 0;
}