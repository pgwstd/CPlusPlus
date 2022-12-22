//
// Created by 潘光伟 on 2022/12/22.
//
#include "iostream"
using namespace std;
int main()
{
    int num = rand() % 100 + 1;
    int input = 0;
    while (true) {
        cin >> input;
        if (input > num) {
            cout << "大了" << endl;
        } else if (input < num) {
            cout << "小了" << endl;
        } else {
            cout << "猜对了" << endl;
            break;
        }
    }
    return 0;
}