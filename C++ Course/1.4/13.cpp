#include <iostream>

int x, y, z;

void rotate(int a, int b, int c){
    if      (a <= b && b <= c) {x = a; y = b; z = c;}
    else if (a <= c && c <= b) {x = a; y = c; z = b;}
    else if (b <= a && a <= c) {x = b; y = a; z = c;}
    else if (b <= c && c <= a) {x = b; y = c; z = a;}
    else if (c <= a && a <= b) {x = c; y = a; z = b;}
    else if (c <= b && b <= a) {x = c; y = b; z = a;}
}

int main(){
    int x1, y1, z1;
    std::cin >> x1 >> y1 >> z1;
    rotate(x1, y1, z1);
    x1 = x; y1 = y; z1 = z;

    //std::cout << x1 << y1 << z1 << std::endl;

    int x2, y2, z2;
    std::cin >> x2 >> y2 >> z2;
    rotate(x2, y2, z2);
    x2 = x; y2 = y; z2 = z;

    //std::cout << x2 << y2 << z2 << std::endl;

    if (x1 - x2 == 0 && y1 - y2 == 0 && z1 - z2 == 0) std::cout << "Boxes are equal";
    else if (x1 - x2 >= 0 && y1 - y2 >= 0 && z1 - z2 >= 0) std::cout << "The first box is larger than the second one";
    else if (x2 - x1 >= 0 && y2 - y1 >= 0 && z2 - z1 >= 0) std::cout << "The first box is smaller than the second one";
    else std::cout << "Boxes are incomparable";

    return 0;
}