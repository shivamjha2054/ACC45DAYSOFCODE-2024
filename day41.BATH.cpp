#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;  // Geyser capacity and bucket capacity
        
        // Calculate the number of people who can take a bath
        int total_buckets = X / Y;
        int people = total_buckets / 2;
        
        cout << people << endl;
    }
    
    return 0;
}
