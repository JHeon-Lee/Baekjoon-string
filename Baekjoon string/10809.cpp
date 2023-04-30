#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char s[101];
	cin >> s;

	int arr[26];
	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}

	for (int c = 97; c <= 122; c++)
	{
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] == c)
			{
				arr[c - 97] = i;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}