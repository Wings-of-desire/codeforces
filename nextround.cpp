#include <iostream>
using namespace std;
int main(void)
{
    int count = 0;
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[k] && a[i] > 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}