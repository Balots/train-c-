#include <iostream>
#include <algorithm>
using namespace std;

long long int w, h, n;

long long int maxl(long long int w, long long int h, long long int len){
    return (len/h) * (len/w);
}

long long int FindAns(long long int w, long long int h, long long int n){
    long long int l = 0;
    long long int r = max(w, h) * n;
    while (l+1 < r){
        long long int mid = (l+r)/2;
        if (maxl(w, h, mid) >= n) r = mid;
        else l = mid;
    }
    return r;
}

int main(){
    cin >> w >> h >> n;
    cout << FindAns(w, h, n);
    return 0;
}