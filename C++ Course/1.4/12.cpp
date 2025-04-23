#include <iostream>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a <= b  && b <= c) std::cout << a << " " << b << " " << c;
    else if (a <= c && c <= b) std::cout << a << " " << c << " " << b;
    else if (b <= a && a <= c) std::cout << b << " " << a << " " << c;
    else if (b <= c && c <= a) std::cout << b << " " << c << " " << a;
    else if (c <= a && a <= b) std::cout << c << " " << a << " " << b;
    else if (c <= b && b <= a) std::cout << c << " " << b << " " << a;
    return 0;
}