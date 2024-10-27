#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Find the maximum tastiness of the first ingredient
        int max_first = max(a, b);

        // Find the maximum tastiness of the second ingredient
        int max_second = max(c, d);

        // Calculate the maximum total tastiness
        int max_tastiness = max_first + max_second;

        cout << max_tastiness << endl;
    }

    return 0;
}