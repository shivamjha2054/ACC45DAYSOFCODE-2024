#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int maxTastiness = max({a + c, a + d, b + c, b + d});
        
        cout << maxTastiness << endl;
    }
    
    return 0;
}
