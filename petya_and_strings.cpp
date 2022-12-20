#include <iostream>
#include <cctype>
using namespace std;
int main(void)
{
    int res;
    string str1, str2;
    cin >> str1 >> str2;
    int N = str1.size();
    for (int i = 0; i < N; i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
        if (str1[i] == str2[i])
        {
            if (i == N - 1)
            {
                res = 0;
                break;
            }
            else
                continue;
        }
        else if(str1[i] > str2[i])
        {
            res = 1;
            break;
        }
        else if (str1[i] < str2[i])
        {
            res = -1;
            break;
        }
    }
    cout << res << endl;
}