#include <iostream>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    
    int con = ((a==b)+(a==c)+(b==c));
    std::cout << con + (con==1);
    return 0;
}