//
// Created by 潘光伟 on 2022/12/19.
//
#include "iostream"
#include "string"
using namespace std;
int main()
{
    char str[] = "hello";//c语言风格
    string str2 = "hello";//c++语言风格(要包含头文件)
    int input = 0;
    cin >> input;
    cout << input <<endl;
    bool flag = true;
    bool flag2 = false;
    cout << flag <<endl;
    cout << flag2 << endl;
    cout << str2 <<endl;
    cout << str << endl;
    cout << "hello world\t" << endl;
    cout << "aaa\thello world" << endl;
    cout << "a\thello world" << endl;
    cout << "aa\thello world" << endl;
    cout << "\\a" << endl;
    return 0;
}