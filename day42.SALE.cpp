#include <iostream>
#include <algorithm> // for std::min
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        // Calculate the total cost excluding the minimum price
        int total_cost = A + B + C;
        int min_price = min({A, B, C});
        int amount_to_pay = total_cost - min_price;

        // Output the result
        cout << amount_to_pay << endl;
    }

    return 0;
}
