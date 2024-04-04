#include <iostream>

using namespace std;

int main(){
    int A, B;
    cin >> A;
    cin >> B;
    // B의 1의자리랑 A의 곱
    cout << A * (B % 10) << endl;
    cout << A * (B / 10 % 10) << endl;
    cout << A * (B / 100) << endl;
    cout << A * B;
    return 0;
}