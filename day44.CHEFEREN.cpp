#include <iostream>
using namespace std;

void chefEren() {
    int T;
    cin >> T; 

    while (T--) {
        int N, A, B;
        cin >> N >> A >> B; 

        
        int oddCount = (N + 1) / 2;  
        int evenCount = N / 2;       

        
        int totalDuration = (oddCount * B) + (evenCount * A);

        
        cout << totalDuration << endl;
    }
}

int main() {
    chefEren();
    return 0;
}
