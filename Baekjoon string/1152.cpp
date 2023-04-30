#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int count = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] != NULL && s[i] != ' ') && (s[i + 1] == NULL || s[i + 1] == ' '))
		{
			count++;
		}
	}
	
	cout << count;

	return 0;
}