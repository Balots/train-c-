#include <iostream>

using namespace std;

const int MAXN = 100500;
int n, q, tmp;
int a[MAXN];

const char* IsInArr(int num){
    int l = -1;
    int r = n;
    while (l + 1 < r){
        int mid = (l + r)/2;
        if (a[mid] < num){l=mid;}
        else {r=mid;}
    }
    if (r<n && a[r] == num){return "YES";}
    else {return "NO";}
}

int main(){
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < q; i++){
        cin >> tmp;
        cout << IsInArr(tmp) << "\n";
    }
    return 0;
}
