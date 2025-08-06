#include <iostream>

using namespace std;

int main(){
    int A;
    int i = 0, curr = 1, prev = 0;
    cin >> A;
    while (curr < A){
        int next = curr + prev;
        prev = curr;
        curr = next;
        i++;
        if (A == curr) 
        {
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}