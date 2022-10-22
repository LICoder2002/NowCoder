#include<iostream>
using namespace std;

int Count(int n)
{
	int cnt = 0;
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n /= i;
			}
			++cnt;
		}
	}
	if (n != 1)
	{
		++cnt;
	}
	return cnt;
}

int main()
{
	int n = 0;
	while (cin >> n)
	{
		int cnt = Count(n);
		cout << cnt << endl;
	}
}