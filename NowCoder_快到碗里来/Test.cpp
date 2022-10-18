#include<iostream>
using namespace std;

bool Judge(double n, double r)
{
	return n <= (2 * 3.14 * r);
}

int main()
{
	double n = 0, r = 0;
	while (cin >> n >> r)
	{
		bool flag = Judge(n, r);
		if (flag)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}