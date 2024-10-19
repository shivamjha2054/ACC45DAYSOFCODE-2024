#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y;  // X: time taken by bike, Y: time taken by car
        cin >> X >> Y;

        if (X < Y)
            cout << "BIKE" << endl;
        else if (Y < X)
            cout << "CAR" << endl;
        else
            cout << "SAME" << endl;
    }

    return 0;
}
