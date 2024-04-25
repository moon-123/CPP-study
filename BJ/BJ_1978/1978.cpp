#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];

        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                cnt -= 1;
                break;
            }
        }
        if(arr[i] != 1)
        {
            cnt += 1;
        }
    }

    cout << cnt;

    return 0;
}