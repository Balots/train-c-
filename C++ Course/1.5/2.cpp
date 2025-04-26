#include <iostream>

int main(){
    int n, i = 2;
    std::cin >> n;
    
    while (n%i != 0){
        i++;
    }
    std::cout << i;
    return 0;
}