#include <iostream>

int main(){
    int n = 1, m = 0, count = 0;
    while (n){
        std::cin >> n;
        if (n > m) {m = n; count = 0;}
        if (n == m) count++;
    }

    std::cout << m;
    return 0;
}