#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	while (cin >> num)
	{
		cout << num << " = ";
		for (int i = 2; i <= sqrt(num); ++i)
		{
			while (num % i == 0 && num != i)
			{
				cout << i << " * ";
				num /= i;
			}
		}
		cout << num << endl;

	}

	return 0;
}