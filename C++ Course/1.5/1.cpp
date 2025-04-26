#include <iostream>
#include <cmath>

int main(){
    int n, i = 1;
    std::cin >> n;
    while (i <= pow(n, 0.5)){
        std::cout << pow(i, 2) << ' ';
        i++;
    }
    return 0;
}