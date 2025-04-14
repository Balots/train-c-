#include <iostream>

int main(){
    const int l = 109;
    int speed, time;
    std::cin>>speed>>time;
    int m = (speed*time%l + l)%l;
    std::cout<<m<<std::endl;
} 