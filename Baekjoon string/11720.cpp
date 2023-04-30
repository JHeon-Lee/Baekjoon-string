#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	while (n > 100 || n < 1)
		cin >> n;

	cin >> s;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += s[i] - '0'; // char -> int Çü º¯È¯
	}

	cout << sum;

	return 0;
}