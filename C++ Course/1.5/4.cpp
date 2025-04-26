#include <iostream>

int main(){
    int n, i = 1;
    std::cin >> n;

    while (i < n) i*=2;

    if (i == n) std::cout << "YES";
    else std::cout << "NO";

    return 0;
}