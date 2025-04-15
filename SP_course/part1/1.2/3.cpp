#include <iostream>

using namespace std;

const long long mod = 1791791791;
long long cur, a, b;

int NextRand(){
    cur = (cur * a + b)%mod;
    return cur;
}

int main(){
    long long n;
    long long i1 = 0, i2 = 0;
    long long max1 = -1, max2 = -1;
    cin >> n;
    cin >> cur >> a >> b;
    for(int i = 0; i < n; i++){
        cur = NextRand();
        if(cur > max1){
            max2 = max1;
            max1 = cur;
            i2 = i1;
            i1 = i;
        }else{
            if(cur > max2){
                max2 = cur;
                i2 =  i;
            }
        }
    }
    cout << i1 + 1 << ' ' << i2 + 1;
    return 0;
}