#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        long long N;
        cin >> N; 

        
        long long sets = N / 5;
        long long remainder = N % 5;
        long long coins = 4 * sets + remainder;

        cout << coins << endl;
    }
    return 0;
}
