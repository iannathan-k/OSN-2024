#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int score[n];
    for(int i = 0; i < n; i++) {
        cin >> score[i];
    }
    
    int high = 0;
    for(int i = 1; i < n; i++) {
        if (score[i] > high) {
            high = score[i];
        }
    }
    if (score[0] > high){
        cout << 0;
    } else {
        cout << (high - score[0] + 1);
    }
        
    return 0;
}