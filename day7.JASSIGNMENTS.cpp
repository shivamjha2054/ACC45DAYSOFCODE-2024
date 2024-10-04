#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int X;
        cin >> X;
        
        
        int timeRequired = 3;
        int deadline = 10; 
        
        
        if (X + timeRequired <= deadline) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
