#include <iostream>

int main(){
    int c1, c2, c3;
    std::cin>>c1>>c2>>c3;
    std::cout<<c1/2 + c2/2 + c3/2 + c1%2 + c2%2 + c3%2 << std::endl;
    return 0;
}