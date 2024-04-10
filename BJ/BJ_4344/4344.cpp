#include <iostream>

using namespace std;


int main()
{
    cout<<fixed;
    cout.precision(3);

    int C;
    int N;
    int sum;
    float avg;
    int student = 0;
    cin >> C;
    float result[C];

    for (int i = 0; i < C; i++)
    {
        N = 0;
        sum = 0;
        student = 0;
        avg = 0;
    
        cin >> N;
        int score[N];
        for (int j = 0; j < N; j++)
        {
            cin >> score[j];
            sum += score[j];
        }

        avg = (float)sum / N;

        for (int j = 0; j < N; j++)
        {
            if(score[j] > avg)
            {
                student += 1;
            }
        }
        result[i] = (float)student / N * 100;
    }
    for (int i = 0; i < C; i++)
    {
        cout << result[i] << "%" << endl;
    }

    return 0;
}