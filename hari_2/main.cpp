#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {

    long long a, b;
    int c, d;
    cin >> a >> b >> c >> d;

    long long lowC = ceil((double) a / c);
    long long highC = b / c;

    long long lowD = ceil((double) a / d);
    long long highD = b / d;

    long long lengthC = highC - lowC + 1;
    long long lengthD = highD - lowD + 1;

    long long low = max(lowC, lowD);
    long long high = max(highC, highD);

    long long lcm = lcm(a, b);
 
    long long count = 0;

    long long lowL = ceil((double) a / lcm);
    long long highL = a / lcm;
    long long lengthL = highL - lowL + 1;

    // for (long long i = low; i <= high; i++) {
    //     if ((c * i) % d == 0) {
    //         count++;
    //     }
    // }

    cout << (b - a) - (lengthC + lengthD - lengthL) + 1;

    return 0;
}