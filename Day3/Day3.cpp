#include <iostream>
using namespace std;

// 타입변환
#if 0
int main(){
    int num1 = 3.1415;
    int num2 = 8.3E12;
    double num3 = 5;

    cout << "num1에 저장된 값은" << num1 << "입니다." << endl;
    cout << "num2에 저장된 값은" << num2 << "입니다." << endl;
    cout << "num3에 저장된 값은" << num3 << "입니다.";
    return 0;
}
#endif

// 타입변환 2
#if 0
int main(){

    double result1 = 5 + 3.14;
    double result2 = 5.0f + 3.14;

    cout << "result1에 저장된 값은 " << result1 << "입니다." << endl;
    cout << "result2에 저장된 값은 " << result2 << "입니다. ";
    
}
#endif

// 명시적 타입 변환
#if 1
int main(){
    int num1 = 1;
    int num2 = 4;

    double result1 = num1 / num2;
    double result2 = (double) num1 / num2;
    double result3 = double (num1) / num2;

    cout << "result1에 저장된 값은 " << result1 << "입니다." << endl;
    cout << "result2에 저장된 값은 " << result2 << "입니다." << endl;
    cout << "result3에 저장된 값은 " << result3 << "입니다.";

    return 0;
}
#endif