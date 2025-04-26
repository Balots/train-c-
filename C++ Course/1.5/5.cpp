#include <iostream>

int main(){
    int n, i = 0;

    std::cin >> n;
    while (n){
        i++;
        std::cin >> n;
    }
    std::cout << i;
    return 0;
}