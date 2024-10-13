#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N; // N: number of kg of pulp
        cin >> N;
        
        // Each kg of pulp can produce 10 notebooks
        int notebooks = 10 * N;
        
        cout << notebooks << endl;
    }
    
    return 0;
}
