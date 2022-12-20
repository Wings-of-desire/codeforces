#include <iostream>
using namespace std;
int main(void)
{
	string flag = "No";
	int n;;
	cin >> n; 
	for (int i = 2; i < n; i += 2)
	{
		if ( (n - i) % 2 == 0)
		{
			flag = "Yes";
			break;
		}
	}
	cout << flag << endl;
}
