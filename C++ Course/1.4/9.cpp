#include <iostream>

bool check(int x1, int x2, int y1, int y2){
    if (x1 == x2 || y1 == y2) return false;
    else if ((abs((y2-y1)/(x2-x1)) == 2) || (abs((x2-x1)/(y2-y1)) == 2)) return true;
    else return false;
}

int main(){
    int x1, y1, x2, y2;
    char* ans[2] = {"NO", "YES"};
    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cout << ans[check(x1, x2, y1, y2)];
    return 0;
}