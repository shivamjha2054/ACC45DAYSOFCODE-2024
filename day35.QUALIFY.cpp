#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int X, A, B; 
        cin >> X >> A >> B;

        
        int totalPoints = A * 1 + B * 2;

        
        if (totalPoints >= X) {
            cout << "Qualify" << endl;
        } else {
            cout << "NotQualify" << endl;
        }
    }

    return 0;
}
