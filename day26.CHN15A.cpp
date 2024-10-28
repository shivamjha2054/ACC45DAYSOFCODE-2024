#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> characteristics(N);
        for (int i = 0; i < N; i++) {
            cin >> characteristics[i];
        }

        int wolverineCount = 0;
        for (int i = 0; i < N; i++) {
            int newCharacteristic = characteristics[i] + K;
            if (newCharacteristic % 7 == 0) {
                wolverineCount++;
            }
        }

        cout << wolverineCount << endl;
    }

    return 0;
}
