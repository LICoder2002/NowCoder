#include<vector>
using namespace std;


class Solution {
public:
	/**
	 *	���������е���С������ɺ�
	 *	���룺��������arr
	 *	���أ����������е���С������ɺ�
	 */
	int getFirstUnFormedNum(vector<int> arr, int len) {
		int sum = 0;
		int min = arr[0];
		for (int i = 0; i < len; ++i)
		{
			sum += arr[i];
			min = std::min(min, arr[i]);
		}
		vector<int> dp(sum + 1, 0);
		for (int i = 0; i < len; ++i)
		{
			for (int j = sum; j >= arr[i]; --j)
			{
				if (dp[j] < dp[j - arr[i]] + arr[i])
				{
					dp[j] = dp[j - arr[i]] + arr[i];
				}
			}
		}

		for (int i = min; i < sum + 1; ++i)
		{
			if (dp[i] != i)
				return i;
		}

		return sum + 1;
	}
};