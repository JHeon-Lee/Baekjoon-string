#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string s;
	while (1)
	{
		getline(cin, s);
		if (s == "")
			break;

		cout << s << endl;
	}
	return 0;
}