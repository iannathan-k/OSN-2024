#include <iostream>
using namespace std;

bool check(int n, int array[]) {
    bool swap = false;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if (array[i] == 2048) {
                return true;
            }
            if (array[i] == -1 or array[j] == -1) {
                continue;
            }
            if (array[i] == array[j]) {
                array[i] = array[i] * 2;
                array[j] = -1;
                swap = true;
            }
        }
    }

    if (swap == true) {
        return check(n, array);
    } else if (swap == false) {
        return false;
    }
    
    return false;
}

int main() {
    int query;
    cin >> query;
    
    int results[query];
    
    for(int i = 0; i < query; i++) {
        int n;
        cin >> n;
        int array[n];
        for(int j = 0; j < n; j++) {
            cin >> array[j];
        }
        
        results[i] = check(query, array);
    }
    
    for(int i = 0; i < query; i++) {
        if (results[i] == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}