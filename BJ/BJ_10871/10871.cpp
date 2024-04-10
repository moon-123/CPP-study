#include <iostream>

using namespace std;

int main(){
    int N, X;
    cin >> N;
    cin >> X;

    int arr[N];
    int result[N];
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] < X)
        {
            result[cnt] = arr[i];
            cnt += 1;
        }
    }
    
    for (int i = 0; i < cnt; i++)
    {
        cout << result[i] << " ";
    }
}