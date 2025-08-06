#include <iostream>

using namespace std;

int main(){
    int count = 0, mcount = 100000;
    int prev = 0, curr = 0, next;
    bool is_max = false;
    int is_dist = 0;

    while (true){
        cin >> next;
        if (next == 0) break;
        if (next < curr && is_max) is_dist++;

        if (is_dist == 2) {
            mcount = min(mcount, count);
            is_dist--;
            count = 0;
        }

        prev = curr;
        curr = next;
        if (prev < curr && prev != 0) is_max = true;
        else is_max = false;
        
        if (is_dist == 1) count++;
    }

    cout << mcount%100000;
    return 0;
}