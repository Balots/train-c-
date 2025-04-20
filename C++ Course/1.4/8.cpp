#include <iostream>
#include <cmath>

int main(){
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    if ((abs(x2 - x1)==abs(y2 - y1)) || (y1 == y2 || x1 == x2)) std::cout << "YES";
    else std::cout << "NO";
    return 0;
}