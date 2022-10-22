#include<iostream>
#include<string>
using namespace std;

int main()
{

	string str;
	while (getline(cin, str))
	{
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				if (str[i] >= 'F' && str[i] <= 'Z')
					cout << (char)(str[i] - 5);
				else
					cout << (char)(str[i] + 26 - 5);
			}
			else
				cout << str[i];
		}
		cout << endl;
	}



	return 0;
}