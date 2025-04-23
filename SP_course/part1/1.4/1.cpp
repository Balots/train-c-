#include <iostream>

using namespace std;

int coef[6];
long double e = 1e-9;
int n, tmp;

long double f(long double x){
    long double x0 = 1;
    long double x1 = x;
    long double x2 = x*x1;
    long double x3 = x*x2;
    long double x4 = x*x3;
    long double x5 = x*x4;
    long double y = coef[5]*x5 + coef[4]*x4 + coef[3]*x3 + coef[2]*x2 + coef[1] * x1 + coef[0]*x0; 
    return y;
}

long double FindRoot(long double l, long double r){
    while (r-l > e){
        long double mid = (r+l)/2.0;
        if (f(mid) < 0) l = mid;
        else r = mid;
    }
    long double ans = (r+l)/2.0;
    return ans;
}

int main(){
    cout.precision(16);
    cin >> n;
    for (int i = n; i >= 0; i--){
        cin >> tmp;
        coef[i] = tmp;
    }
    for (int i = 5; i > n; i--){
        coef[i] = 0;
    }

    long double r = 3, l = -3;
    //cout << coef[5] << coef[4] << coef[3] << coef[2] << coef[1] << coef[0] << endl;
    //cout << l << ' ' << r << endl;
    cout << FindRoot(l, r);
    return 0;
}
