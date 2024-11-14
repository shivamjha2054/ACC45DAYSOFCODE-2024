#include <iostream>
using namespace std;

void passOrFail() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int N, X, P;
        cin >> N >> X >> P; // Read N, X, and P for each test case

        // Calculate the score
        int score = 3 * X - (N - X);

        // Determine if Chef passes or fails
        if (score >= P) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
    }
}

int main() {
    passOrFail();
    return 0;
}
