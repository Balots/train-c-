#include <iostream>

int main(){
    int h, a, b;
    std::cin>>h>>a>>b;
    std::cout<<(h + (a-2*b) - 1)/(a-b)<<std::endl;
    return 0;
}