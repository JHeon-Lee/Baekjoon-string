#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 10 || t < 1)
		cin >> t;

	for (int i = 0; i < t; i++)
	{
		char s[1001];
		cin >> s;
		cout << s[0] << s[strlen(s) - 1] << endl;
	}

	return 0;
}