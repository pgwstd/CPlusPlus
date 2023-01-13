//
// Created by 潘光伟 on 2023/1/13.
//
#include "iostream"

using namespace std;

struct Student{
    string name;
    int age;
    int score;
};

int main() {
    struct Student s1;
    s1.name = "李华";
    s1.age = 21;
    s1.score = 98;
    struct Student s2 = {"小明",21,99};
    cout << "姓名:" << s1.name << endl;
    cout << "年龄:" << s1.age << endl;
    cout << "成绩:" << s1.score << endl;
    return 0;
}