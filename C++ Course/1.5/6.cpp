#include <iostream>

int main(){
    int n, s = 0;

    std::cin >> n;
    while (n){
        s += n;
        std::cin >> n;
    }
    std::cout << s;
    return 0;
}