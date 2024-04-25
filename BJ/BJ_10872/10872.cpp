#include <iostream>

using namespace std;

int calc(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * calc(n - 1);
}

int main()
{
    int N;

    cin >> N;

    cout << calc(N);
}

