#include <iostream>

using namespace std;

long long n, tmp, cur;
long long maxs = -10e10;

int main(){
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> tmp;
        cur += tmp;
        if(cur > maxs){
            maxs = cur;
        }
        if(cur < 0){
            cur = 0;
        }
    }
    cout << maxs;
    return 0;
}