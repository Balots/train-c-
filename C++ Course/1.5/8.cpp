#include <iostream>

int main(){
    int tmp, m1 = 0, m2 = 0;

    std::cin >> tmp;
    while (tmp){
        if (m1 <= tmp){
            m2 = m1;
            m1 = tmp;
            std::cin >> tmp;
            continue;
        }
        if (m2 < tmp){
            m2 = tmp;
        }
        std::cin >> tmp;
    }
    
    std::cout << m2;
    return 0;
}