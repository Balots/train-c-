#include <iostream>

using namespace std;

const int MAXN = 100500;
int n;
int a[MAXN];

int getFirstOne(int num){
    int l = -1;
    int r = num;
    int i = 0;
    while (l + 1 < r){
        int mid = (l + r)/2;
        if (a[i] == 0){l=mid;}
        else {r=mid;}
        i++;
    }
    return r;
}

int main(){
    int n, q;
    cin >> n >> q;
    for(int i = 0; i < q; i++){
        cin >> a[i];
    }
    cout << getFirstOne(n);
    return 0;
}
