#include <iostream>
#include <cstdio>

using namespace std;

int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool isLeapYear(int year)
{
	return (year) % 400 == 0 || year % 4 == 0 && year % 100 != 0;
}
// 最后一年过了多少天
int nDays(int year, int month, int day) {
    int sum = 0;
    for (int i = 1; i < month; ++i) {
        sum += monthDays[i];
    }
    sum += day;
    if (month > 2) {
        sum += isLeapYear(year) ? 1 : 0;
    }
    return sum;
}
// y年，m月，n日距离基数（0年12月31日）过了多少天， 算出其 %7 的同余数 (同余数：与正常 %7 得到的值相同)
int diff(int year, int month, int day) {
    return (year - 1) + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + nDays(year, month, day);
}


// year年，month月，day天是星期几
int week(int year, int month, int day) {
    return diff(year, month, day) % 7 == 0 ? 7 : diff(year, month, day) % 7;
}

int m1(int w, int k, int e) {
    return 1 + (k - 1) * 7 + (e - w + 7) % 7;
}

int m2(int w) {
    return 32 - ((w == 1) ? 7 : (w - 1));
}

int main() {
    int year = 0;
    while (cin >> year) {
        printf("%d-%02d-%02d\n", year, 1, 1);
        printf("%d-%02d-%02d\n", year, 1, m1(week(year, 1, 1), 3, 1));
        printf("%d-%02d-%02d\n", year, 2, m1(week(year, 2, 1), 3, 1));
        printf("%d-%02d-%02d\n", year, 5, m2(week(year, 6, 1)));
        printf("%d-%02d-%02d\n", year, 7, 4);
        printf("%d-%02d-%02d\n", year, 9, m1(week(year, 9, 1), 1, 1));
        printf("%d-%02d-%02d\n", year, 11, m1(week(year, 11, 1), 4, 4));
        printf("%d-%02d-%02d\n\n", year, 12, 25);
        //        cout << endl;
    }
    return 0;
}
