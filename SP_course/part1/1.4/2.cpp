#include <iostream>
#include <cmath>

using namespace std;

int cy, cx, cd, n, tmp;
int coef[5];
long double e = 1e-12;

long double f(long double x){
    long double x0 = 1;
    long double x1 = x;
    long double x2 = x*x1;
    long double x3 = x*x2;
    long double x4 = x*x3;
    long double x5 = x*x4;
    long double y = coef[4]*x4 + coef[3]*x3 + coef[2]*x2 + coef[1] * x1 + coef[0]*x0; 
    return y;
}

long double c(long double x, long double y){
    long double ax = x - cx;
    long double ay = y - cy;
    return pow(pow(ax, 2) + pow(ay, 2), 0.5);
}

long double FindRoot(long double l, long double r){
    while (r-l > e){
        long double xmid = (r+l)/2.0;
        if (c(xmid, f(xmid)) < cd) l = xmid;
        else r = xmid;
    }
    long double ans = (r+l)/2.0;
    return ans;
}

int main(){
    cout.precision(16);

    cin >> cx >> cy >> cd;
    cin >> n;

    for (int i = n; i >= 0; i--){
        cin >> tmp;
        coef[i] = tmp;
    }
    for (int i = 4; i > n; i--){
        coef[i] = 0;
    }

    long double x, xo;
    cin >> x;
    xo = cx + cd + 1;
    cout << FindRoot(x, xo);
	return 0;
}