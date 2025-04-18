#include <iostream>

using namespace std;

const int MAXN = 2e5;
int arr[MAXN];
int n, q, tmp;

int FindHigher(int num){
    int r = n;
    int l = -1;
    while (l + 1 < r){
        int mid = (r+l)/2;
        if (arr[mid] < num){
            l = mid;
        }else{
            r = mid;
        }
    }
    return arr[r];
}

int main(){
    cin >> n >> q;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        arr[i] = tmp;
    }
    for (int i = 0; i < q; i++){
        cin >> tmp;
        int  ans = FindHigher(tmp);
        if (ans < tmp){
            cout << "NO SOLUTION\n";
        }else{
            cout << ans << "\n";
        }
    }
}
