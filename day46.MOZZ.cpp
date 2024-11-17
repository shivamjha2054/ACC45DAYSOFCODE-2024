#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int X, Y, R;
        cin >> X >> Y >> R;

        
        int extra_sticks = R / 30;
        int total_sticks = X + extra_sticks;

        
        int max_plates = total_sticks / Y;
        if (total_sticks % Y != 0) {
            max_plates += 1; 
        }

        cout << max_plates << endl;
    }

    return 0;
}
