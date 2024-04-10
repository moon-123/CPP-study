#include <iostream>

using namespace std;

int main(){
    int N = 0;
    int cnt = 0;
    int size = 0;
    string str = "";

    cin >> N;

    int sum[N];
    for (int i = 0; i < N; i++)
    {
        sum[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        size = 0;
        cnt = 0;
        cin >> str;

        for (int j = 0; str[j] != '\0'; j++)
        {
            size += 1;
        }

        for (int j = 0; j < size; j++)
        {
            if (str[j] == 'O')
            {
                cnt += 1;
            }

            else
            {
                cnt = 0;
            }
            sum[i] += cnt;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << sum[i] << endl;
    }
}