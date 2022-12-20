#include <iostream>
#include <map>
using namespace std;
int main(void)
{
    int count = 0;
    map<char, int> hashmap;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (hashmap.find(str[i]) == hashmap.end())
        {
            hashmap[str[i]] = 1;
            count++;
        }
        else
        {
            int val = hashmap[str[i]];
            hashmap[str[i]] = ++val;
        }
    }
    if (count % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}