#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int arr[100001] = {0};
	arr[0] = 1;
	arr[1] = 1;
	int n = 0;
	for (int i = 2; i <= 100000; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] = arr[i] % 1000000;
	}
	while (cin >> n) {
		if (n <= 25) {
			//��25֮ǰ�����ֶ���6λ��
			printf("%d\n", arr[n]);
		}
		else {
			//��25֮������ֶ�Ҫ����6λ���������
			printf("%06d\n", arr[n]);
		}
	}
	system("pause");
	return 0;

}
