#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int plates[n];
    for(int i = 0; i < n; i++) {
        cin >> plates[i];
    }
    
    int high = 0;
    for(int i = 0; i < n; i++) {
        if (plates[i] > high) {
            high = plates[i];
        }
    }
    cout << high;
    return 0;
}