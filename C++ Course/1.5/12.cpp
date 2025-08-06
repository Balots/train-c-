#include <iostream>

using namespace std;

int main(){
    int curr = 0, prev = 0;
    int next, count = 0;
    bool flag = false;

    while (true){
        cin >> next;
        if (next == 0) break;
        if (next < curr && flag) count++;

        prev = curr;
        curr = next;
        if (prev < curr && prev != 0) flag = true;
        else flag = false;
    }
    cout << count;
    return 0;
}