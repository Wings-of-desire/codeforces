#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        int a[3];
        int cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a[j];
            if (a[j] == 1)
            {
                cnt++;
            }
        }
        if (cnt >= 2)
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}