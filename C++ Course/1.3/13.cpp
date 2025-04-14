#include <iostream>

int main(){
    int num;
    std::cin>>num;

    int c1 = num/1000;
    int c2 = num/100%10;
    int c3 = num%100/10;
    int c4 = num%10;

    std::cout << ((10*c1 + c2 + 1)+(10*c4 + c3 + 1))/(2*(10*c1 + c2 + 1)) + ((10*c1 + c2 + 1)+(10*c4 + c3 + 1))%(2*(10*c1 + c2 + 1))<< std::endl;
    return 0;
}