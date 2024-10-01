#include <iostream>
using namespace std;

int main() {
    // Declare four integers for the topics
    int A, B, C, X;

    // Input A, B, C (prepared topics) and X (topic Chef got)
    cin >> A >> B >> C >> X;

    // Check if X matches any of the topics A, B, or C
    if (X == A || X == B || X == C) {
        cout << "Yes" << endl;  // Chef is prepared for the topic
    } else {
        cout << "No" << endl;   // Chef is not prepared for the topic
    }

    return 0;
}
