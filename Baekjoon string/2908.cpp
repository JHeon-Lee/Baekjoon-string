#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char c1[4], c2[4];
	cin >> c1 >> c2;
	for (int i = 0; i < 4; i++)
	{
		if (c1[i] == '0' || c2[i] == '0' || c1 == c2)
			cin >> c1 >> c2;
	}

	for (int i = 0; i < strlen(c1) / 2; i++)
	{
		char temp = c1[i];
		c1[i] = c1[strlen(c1) - 1 - i];
		c1[strlen(c1) - 1 - i] = temp;
	}

	for (int i = 0; i < strlen(c2) / 2; i++)
	{
		char temp = c2[i];
		c2[i] = c2[strlen(c2) - 1 - i];
		c2[strlen(c2) - 1 - i] = temp;
	}

	if (c1[0] > c2[0])
		cout << c1;
	else if (c1[0] < c2[0])
		cout << c2;
	else
	{
		if (c1[1] > c2[1])
			cout << c1;
		else if (c1[1] < c2[1])
			cout << c2;
		else
		{
			if (c1[2] > c2[2])
				cout << c1;
			else if (c1[2] < c2[2])
				cout << c2;
		}
	}

	return 0;
}