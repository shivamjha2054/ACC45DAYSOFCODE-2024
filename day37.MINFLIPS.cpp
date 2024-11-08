#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int sum = 0, count = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            count += (arr[i] == 1);
        }

        if (sum % 2 == 0) {
            cout << count / 2 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}