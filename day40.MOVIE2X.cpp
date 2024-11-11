#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    
    int timeForFirstPart = Y / 2;

    
    int timeForSecondPart = X - Y;

    
    int totalTime = timeForFirstPart + timeForSecondPart;

    cout << totalTime << endl;

    return 0;
}
