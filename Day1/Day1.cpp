#include <iostream>
#include <cmath>
#define TEXT "Welcome to C++ Programming!!"
using namespace std;

int main(){
    
    // cout << TEXT;
    // return 0;

    int age;

    cout << "여러분의 나이를 입력해 주세요: ";
    cin >> age;

    cout << "여러분의 나이는" << age << "살 입니다." << endl;
    
    return 0;
}