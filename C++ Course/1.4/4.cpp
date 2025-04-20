#include <iostream>

bool is_it_possible(int a, int b, int c){
    if (a >= b + c) return false;
    else if (b >= a + c) return false;
    else if (c >= a + b) return false;
    return true;
}

int main(){
    int a, b, c;
    char* ans[2] = {"NO", "YES"};
    std::cin >> a >> b >> c;
    std::cout << ans[is_it_possible(a, b, c)];
    return 0;
}