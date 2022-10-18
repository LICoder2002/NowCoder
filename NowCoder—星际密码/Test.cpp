//ĞÇ¼ÊÃÜÂë

#include<iostream>

using namespace std;

int main()
{
	int fib[100001] = { 0, 1, 2 };
	for (int i = 3; i < 100001; ++i)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		fib[i] %= 10000;
	}
	int n = 0;
	while (cin >> n)
	{
		int num = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> num;
			printf("%04d", fib[num]);
		}
		cout << endl;
	}

	return 0;
}