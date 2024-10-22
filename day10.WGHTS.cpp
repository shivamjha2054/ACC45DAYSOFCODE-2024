#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;
        
        // Check all possible combinations of weights
        if (W == X || W == Y || W == Z ||
            W == X + Y || W == Y + Z || W == X + Z ||
            W == X + Y + Z) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}