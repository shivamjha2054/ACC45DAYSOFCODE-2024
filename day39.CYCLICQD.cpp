#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        
       
        if ((A + C == 180 && B + D == 180) || 
            (A + B == 180 && C + D == 180) || 
            (A + D == 180 && B + C == 180)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
