#include <iostream>
using namespace std;

int main(){
    // int num;
    // int num1, num2; // 타입이 같으면 같이 선언 가능
    // double num3 = 1.23, num4 = 4.56;

    // num = 20;
    
    // int a = 10;

    // cout << "숫자 10을 10진수로 표현하면 " << a << "이며. " << endl;
    // cout << oct;
    // cout << "숫자 10을 8진수로 표현하면 " << a << "이며, " << endl;
    // cout << hex;
    // cout << "숫자 10을 16진수로 표현하면 " << a << "입니다.";

    int i;
    float sum = 0;

    for (i = 0; i < 1000; i++){
        sum += 0.1;
    }

    cout << "0.1을 1000번 더한 합계는 " << sum << "입니다.";
    
    return 0;
}