#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    cout<<num%10 + num/100 + num/10%10<<endl;
    return 0;
}