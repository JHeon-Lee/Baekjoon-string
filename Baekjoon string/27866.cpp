#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char s[1001];
	cin >> s;

	int i;
	cin >> i;
	while (i < 1 || i>strlen(s))
		cin >> i;

	cout << s[i - 1] << endl;

	return 0;
}