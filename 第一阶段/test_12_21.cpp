//
// Created by 潘光伟 on 2022/12/21.
//
#include "iostream"
using namespace std;
int main(){

    //比较三个数的大小
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "请输入a的值:" << endl;
    cin >> a;
    cout << "请输入b的值:" << endl;
    cin >> b;
    cout << "请输入c的值:" << endl;
    cin >> c;
    if (a > b){
        if (a > c){
            cout << "a是最大的" << endl;
        }
        else{
            cout << "c是最大的" << endl;
        }
    }
    else if (a < c){
        if (b < c){
            cout << "c是最大的" << endl;
        }
       else{
            cout << "b是最大的" << endl;
       }
    }
    else if (b > c){
        cout << "b是最大的" << endl;
    }
    return 0;
}