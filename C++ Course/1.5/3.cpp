#include <iostream>

int main(){
    int n, i = 1;
    std::cin >> n;
    while (i <= n) {std::cout << i << ' '; i*=2;}
    return 0;
}