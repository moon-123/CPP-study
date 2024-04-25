#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "";
    int cnt = 1;
    getline(cin, str1);

    if (str1 == " ")
    {
        cnt = 0;
    }

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == ' ' && i != 0 && str1[i + 1] != '\0')
        {
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}