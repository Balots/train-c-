#include <iostream>

using namespace std;

const long int MAXN = 1e5;
long int n, m;
int arr[MAXN];

int ArrayInit(int k){
    for(int i = 0; i < n; i++){
        arr[i] = i >= k;
    }
    return 0;
}

int BinaryFind(){
    int l = 0;
    int r = n-1;
    int count = 0;
    while(l+1 < r){
        count++;
        int mid = (l+r)/2;
        if(arr[mid]==0)
            l = mid;
        else
            r = mid;
    }
    return count;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        long int k;
        cin >> k;
        ArrayInit(k);
        cout << BinaryFind() << "\n";

    }

}