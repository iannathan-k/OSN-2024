#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string S = "1";

    int query;
    cin >> query;

    for (int i = 0; i < query; i++) {
        int op;
        cin >> op;

        if (op == 1) {
            char ap;
            cin >> ap;
            S += ap;
        } else if (op == 2) {
            S = S.substr(1, S.size() - 1);
        } else {
            cout << stoi(S) % 998244353 << endl;
        }
    }

}