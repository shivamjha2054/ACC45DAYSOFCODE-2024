#include <iostream>
#include <cmath> // For abs function
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int X, Y;
        cin >> X >> Y; 
        cout << abs(X - Y) << endl; 
    }
    return 0;
}
