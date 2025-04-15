#include <iostream>

using namespace std;

long long year;
const long long BREAK = 98765432;
int dig[9];

bool checker(int n, int index){
    bool flag = false;
    for(int i = 0; i < index; i++){
        if(n == dig[i]){
            flag = true;
            break;
        }
    }
    return flag;
}

int digits(int y){\
    int j = 0;
    while(j < 9 and y){
        dig[j] = y%10;
        y /= 10;
        j++;
    }
    return j;
}

int counter(int count){
    int flag = 0;
    for(int i = 0; i <= count; i++){
        while((dig[i]==2) or (dig[i]==0) or checker(dig[i], i)){
            if(dig[i] == 9){flag++; break;}
            dig[i]++;
        }
        if(flag > 1){
            //cout << flag;
            return false;
        }
    }
    return true;
}

int new_year(int digits_num){
    int year = 1;
    for(int i = 1; i <= digits_num; i++){year *= 10;}
    return year;
}

int cur_year(int digits_num){
    int number = 0;
    int m = 1;
    for(int i = digits_num; i > 0; i--){
        number += m*dig[i];
        m *= 10;
    }
    return number;
}

int main(){
    cin >> year;
    if(year >= BREAK){
        return -1;
    }
    while(true){
        int j = digits(year);
        //cout << j << ' ';
        if(counter(j)){
            cout << cur_year(j);
            break;
        }else{
            j = digits(new_year(j));
            //cout << j << endl;
        }
    }
}