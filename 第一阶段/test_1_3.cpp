//
// Created by 潘光伟 on 2023/1/3.
//

#include "iostream"
using namespace std;
//交换两个数
void swap(int a,int b){
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;
}
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}