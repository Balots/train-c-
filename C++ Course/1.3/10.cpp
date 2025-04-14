#include <iostream>

int main(){
    int num;
    std::cin>>num;
    int h = num/3600%24;
    int m = num/60%60%60;
    int s = num%3600%60;
    std::cout<<h<<':'<<m/10<<m%10<<':'<<s/10<<s%10<<std::endl;
    return 0;
}