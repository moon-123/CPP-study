#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int start, int temp, int end)
{
    if (n == 1)
    {
        cout << start << " " << end << endl;
        return;
    }
    else
    {
        hanoi(n - 1, start, end, temp); // 가장 큰 판을 end로 옮기려면 나머지 n-1개가 temp로 가야함.
        cout << start << " " << end << endl;
        hanoi(n - 1, temp, start, end); // temp에서 end로 이동시키는 과정
    }
}


int main()
{
    int N;
    cin >> N;

    string n = to_string(pow(2, N));
    int x = n.find('.');
    n = n.substr(0, x);
    n[n.length() - 1] -= 1;

    cout << n << endl;
    if(N <= 20)
    {
        hanoi(N, 1, 2, 3);
    }
}

