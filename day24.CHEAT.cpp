#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        // Calculate the number of Tuesdays
        int tuesdays = N / 7;  // Full weeks
        if (N % 7 >= 2) {
            tuesdays += 1;  // Additional Tuesday within the extra days
        }

        cout << tuesdays << endl;
    }

    return 0;
}
