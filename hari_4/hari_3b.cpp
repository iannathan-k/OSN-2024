#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int bar[n];
    int pieceCount = 1;
    int tempCount = 0;

    int lastAdd;

    bool firstNut = false;

    for (int i = 0; i < n; i++) {
        cin >> bar[i];
    }

    for (int i = n - 1; i >= 0; i--) {

        if (bar[i] == 1 && firstNut == true && i != 0) {
            tempCount++;
            pieceCount = pieceCount * tempCount;
            lastAdd = tempCount;
            tempCount = 0;
        } else if (firstNut == false && bar[i] == 1) {
            tempCount = 0;
            firstNut = true;
        } else {
            tempCount++;
        }
    }

    cout << pieceCount;

    return 0;
}