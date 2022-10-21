#include<iostream>
using namespace std;

int findTimes(long long n)
{
    int count = 0;
    while (n >= 2)
    {
        if (n % 3)
        {
            n = n / 3 + 1;
        }
        else
            n /= 3;
        count++;
    }
    return count;
}

int main()
{
    long long n = 0;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;

        int res = findTimes(n);
        cout << res << endl;
    }
    return 0;
}