#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string s;
	cin >> s;
	while (s.length() < 2 || s.length() > 16)
		cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] < 65 || s[i] > 90)
			cin >> s;
	}

	int arr[15] = { 0 };
	for (int i = 0; i < s.length(); i++)
	{
		arr[i] = (s[i] + 1) / 3 - 19;
		if (s[i] >= 'S')
		{
			arr[i] = s[i] / 3 - 19;
		}
		if (s[i] == 'Z')
		{
			arr[i] = (s[i] - 1) / 3 - 19;
		}
	}

	int sum = 0;
	for (int i = 0; i < 15; i++)
	{
		sum += arr[i];
	}

	cout << sum;

	return 0;
}