#include <iostream>
#include <cmath>

int main(){
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    if ((0 <= dx && dx <= 1) && (0 <= dy && dy <= 1)) std::cout << "YES";
    else std::cout << "NO";
    return 0;
}