#include <iostream>

int check(int a, int b, int c){
    if (a >= b && a >= c ) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << check(a, b, c);
    return 0;    
}