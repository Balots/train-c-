#include <iostream>

int main(){
    int a, b, n;
    std::cin>>a>>b>>n;
    int price = (a*100 + b)*n;
    std::cout<<price/100<<' '<<price%100<<std::endl;
    return 0;
}