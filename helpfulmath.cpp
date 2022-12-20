#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;
int main(void)
{
    string str;
    cin >> str;
    int N = str.size();
    int len = N - N / 2;
    char a[len];
    for (int i = 0, j = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
        {
            a[j] = str[i];
            j++;
        }
        else
            continue;
    }
    sort(a, a + len);
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            cout << a[i] << endl;
        }
        else
            cout << a[i] << '+';
    }
}          