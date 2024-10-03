#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int timeA, timeB;
        cin >> timeA >> timeB;

        
        int scoreAFirst = max(0, 500 - 2 * timeA) + max(0, 1000 - 4 * (timeA + timeB));


        int scoreBFirst = max(0, 1000 - 4 * timeB) + max(0, 500 - 2 * (timeA + timeB));


        cout << max(scoreAFirst, scoreBFirst) << endl;
    }

    return 0;
}
