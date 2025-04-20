#include <iostream>

int check(int a, int b){
    if (a > b) return 1;
    else if(b > a) return 2;
    else return 0;
}

int main(){
    int a, b;
    std::cin >> a >> b;
    std::cout << check(a, b);
    return 0;
}