#include <iostream>

using namespace std;

int main(){
    int n;
    int i = 0, curr = 1, prev = 0;
    cin >> n;
    while (i < n-1){
        int next = curr + prev;
        prev = curr;
        curr = next;
        i++;
    }
    cout << curr;
    return 0;
}