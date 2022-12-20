#include <iostream>
using namespace std;
int main(void)
{
    int m, n;
    cin >> m >> n;
    int res = (m / 2) * n + (m % 2) * (n / 2);
    cout << res << endl;
    return 0;
}