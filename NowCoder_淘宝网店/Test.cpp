#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int year1, month1, day1, year2, month2, day2;
    while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
    {
        int ret = 0;
        day1--;//1�ŵ�1��Ҳ��ӯ��һ�죬������ǰ��day1��һ�췽��ֱ��������������ӯ��������
        while (year1 < year2 || month1 < month2)
        {

            //���ǰ�ߵ����ںͺ��ߵ����ڻ�����ͬһ�����£���ret�ۼ�day1���µ׵�ӯ��
            //����������2����һ��29�죬����ֱ��ʹ��arr���飬����������ӯ�����������ӯ����ͬ������Ŀ���������ʾ
            ret += (((month1 == 2 && ((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0)) ? 29 : arr[month1]) - day1) * ((month1 == 2 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 11) ? 1 : 2);

            day1 = 0;//day1������һ���µĵ�һ�죬���Ϸ�day1--ͬ�����ﲻ����Ϊ1����0

            if (++month1 > 12)//�·�ҲҪ�����
            {
                month1 = 1;
                year1++;
            }
        }

        //���day1������day2���ڵ����£���ô��day2-day1�Ϳ������ӯ���˶�����
        cout << ret + (day2 - day1) * ((month1 == 2 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 11) ? 1 : 2) << endl;
    }
    return 0;
}