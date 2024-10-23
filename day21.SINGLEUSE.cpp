#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;


        int remaining_health_after_special = H - Y;
        int special_attack_used = (remaining_health_after_special > 0) ? 1 + ceil((double)remaining_health_after_special / X) : 1;

        
        int only_regular_attacks = ceil((double)H / X);

       
        cout << min(special_attack_used, only_regular_attacks) << endl;
    }

    return 0;
}
