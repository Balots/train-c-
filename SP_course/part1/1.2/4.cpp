#include <iostream>

using namespace std;

const long long MAXN = 3 * 100000;
long long PartSum[MAXN];
long long n, q;
long long tmp, l, r;

int main(){
    PartSum[0] = 0;
    cin >> n >> q;
    for(int i = 1; i <= n; i++){
        cin >> tmp;
        PartSum[i] = PartSum[i-1] + tmp;
    }
    for(int i = 0; i < q; i++){
        cin >> l >> r;
        cout << PartSum[r] - PartSum[l-1] << "\n";
    }
    return 0;
}


