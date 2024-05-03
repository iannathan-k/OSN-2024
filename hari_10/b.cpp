#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m;
    cin >> k;

    int birdY[k];
    int birdX[k];

    for (int i = 0; i < k; i++) {
        cin >> birdY[i] >> birdX[i];
    }

    int nearCount;
    int farCount;
    int maxNear;

    for (int i = 0; i < k; i++) {
        nearCount = 0;
        farCount = 0;
        for (int j = 0; j < k; j++) {
            if (j == i) {
                continue;
            }

            if (abs(birdY[i] - birdY[j]) <= 1 && abs(birdX[i] - birdX[j]) <= 1) {
                farCount++;
            }

            if (abs(birdY[i] - birdY[j]) <= 2 && abs(birdX[i] - birdX[j]) <= 2) {
                if (signbit(birdY[i] - birdY[j] + 1) == signbit(birdY[i] - birdY[j - 1] + 1)) {
                    if (signbit(birdX[i] - birdX[j] + 1) == signbit(birdX[i] - birdX[j - 1] + 1)) {
                        nearCount++;
                        // cout << birdY[i] << " " << birdX[i] << " , " << birdY[j] << " " << birdX[j] << endl;
                    }  
                }
                // cout << i << " " << j << endl;
                
            } else if (abs(birdY[i] - birdY[j]) > 1 && abs(birdX[i] - birdX[j]) > 1) {
                continue;
            }
        }
        
        maxNear = max(farCount, maxNear);
        maxNear = max(nearCount, maxNear);
        // cout << maxNear << endl;
    }

    cout << maxNear + 1;
    
    return 0;
}