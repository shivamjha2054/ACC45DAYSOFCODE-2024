#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;  // If digits[i] is 9, set it to 0 and continue the loop for carry
        }
        
        // If we are here, all digits were 9, so we need to add a 1 at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
