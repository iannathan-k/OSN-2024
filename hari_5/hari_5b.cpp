#include <iostream>
#include <vector>
using namespace std;

string sort(string arr[], int n, int m, int index) {

    if (index != m) {
        for (int i = 0; i < n; i++) {
            if ((i + 1) % 2 == 0) {
                if (arr[i][index] > arr[i + 1][index] && arr[i][index - 1] == arr[i + 1][index - 1]) {
                    string temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i + 1] = temp;
                    return sort(arr, n, m, index++);
                    cout << "HAI" << endl;
                }
                cout << "HI" << endl;
            } else {
                if (arr[i][index] < arr[i + 1][index] && arr[i][index - 1] == arr[i + 1][index - 1]) {
                    string temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i + 1] = temp;
                    return sort(arr, n, m, index++);
                    cout << "BAI" << endl;
                }
                cout << "BYE" << endl;
            }

            string out = "";
            for (int i = 0; i < n; i++) {
                out += arr[i] + ", ";
            }
            cout << out << endl;
        }
    }

    string out = "";
    for (int i = 0; i < n; i++) {
        out += arr[i] + ", ";
    }

    return out;
}

int main() {
    int n, m;
    cin >> n >> m;

    string arr[m];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << sort(arr, n, m, 1);

    return 0;
}