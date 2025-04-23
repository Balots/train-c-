#include <iostream>

int main(){
    int n, m, x, y;
    std::cin >> n >> m >> x >> y;
    
    int maxl, minl, xmin, ymin;
    if (n > m){maxl=n;minl=m;}
    else {maxl=m;minl=n;}

    //std::cout << maxl << ' ' << minl << std::endl;

    if (maxl - y < y) xmin = maxl - y;
    else xmin = y;

    if (minl - x < x) ymin = minl - x;
    else ymin = x;

    //std::cout << xmin << ' ' << ymin << std::endl;

    if (xmin > ymin) std::cout << ymin;
    else std::cout << xmin;

    return 0;
}