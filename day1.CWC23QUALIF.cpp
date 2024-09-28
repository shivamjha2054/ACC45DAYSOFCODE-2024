#include <iostream>
using namespace std;

int main() {
    // Input: total points scored by the team
    int X;
    cin >> X;

    // Check if the team qualifies or not
    if (X >= 12) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
