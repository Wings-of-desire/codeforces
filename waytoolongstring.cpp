#include <iostream>
using namespace std;
int main(void)
{
	int n;
	string str;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> str;
		int SIZE = str.size();
		if (SIZE <= 10)
		{
			cout << str << endl;
		}
		else
		{
			char head = str[0];
			char tail = str[SIZE - 1];
			cout << head << SIZE - 2 << tail << endl;	
		}
	}	
	return 0;
}
