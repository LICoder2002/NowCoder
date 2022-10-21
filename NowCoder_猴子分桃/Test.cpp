#include<iostream>
using namespace std;


int main()
{
	int n = 0;
	while (cin >> n)
	{
		if (n == 0)
			break;

		cout << pow(5, n) - 4 << " " << pow(4, n) + n - 4 << endl;
	}

	return 0;
}