#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int cumulative_score1 = 0, cumulative_score2 = 0;
    int max_lead = 0, winner = 0;

    for (int i = 0; i < n; ++i) {
        int s1, s2;
        cin >> s1 >> s2;
        
        cumulative_score1 += s1;
        cumulative_score2 += s2;
        
        int current_lead = abs(cumulative_score1 - cumulative_score2);
        int current_winner = (cumulative_score1 > cumulative_score2) ? 1 : 2;

        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_winner;
        }
    }

    cout << winner << " " << max_lead << endl;
    return 0;
}
