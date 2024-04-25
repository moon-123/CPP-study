#include <iostream>

using namespace std;

int main()
{
    int A, B, V;
    cin >> A >> B >> V;
    int result = 0;

    result = (V - B) % (A - B);

    if (result != 0)
    {
        result = (V - B) / (A - B) + 1;
    }
    else
    {
        result = (V - B) / (A - B);
    }

    cout << result;
    return 0;
}