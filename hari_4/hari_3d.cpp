#include <iostream>
using namespace std;

int main() {

    int count;
    cin >> count;

    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    s1 = s1 + s1;
    s2 = s2 + s2;
    s3 = s3 + s3;

    for (int i = 0; i < (1<<count); i++) {
        for (int j = 0; j < count; j++) {
            if (i&(1<<j)) {
                cout << "r " << (i&(1<<j)) << endl;
            } else {
            }
        }
    }

    return 0;
}