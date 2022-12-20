#include <iostream>
#include <cctype>
using namespace std;
int main(void)
{
    string str;
    cin >> str;
    str[0] = toupper(str[0]);
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    cout << endl;
    return 0;
}