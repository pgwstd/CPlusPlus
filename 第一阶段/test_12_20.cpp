//
// Created by 潘光伟 on 2022/12/20.
//
#include "iostream"
using namespace std;
int main(){
    int input = 0;
    cout << "请输入分数:" << endl;
    cin >> input;
    if (input >= 600){
        cout << "一本大学" << endl;
    }
    else{
        cout << "放牛吧" << endl;
    }
    return 0;
}