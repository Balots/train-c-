#include <iostream>

using namespace std;

int main(){
    int curr, prev;
    int count = 1, mcount = 1;
    
    while (true) {
        int number;
        cin >> number;
        if (number == 0) break;
        else {
            prev = curr;
            curr = number;
        }
        if (curr == prev) {
            count++;
            mcount = max(count, mcount);
        }
        else count = 1;
    }
    
    cout << mcount;
    return 0;
}