#include <iostream>

using namespace std;

int main()
{
    char str[] = "";
    int cnt = 0;
    bool isword = false;
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if ((int)str[i + 1] >= 65 & (int)str[i + 1] <= 122)
            {
                
            }
        }
    }

    cout << cnt + 1;
    return 0;
}