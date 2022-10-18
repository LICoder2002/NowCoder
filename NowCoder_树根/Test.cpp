//Ê÷¸ù
//
//#include<iostream>
//using namespace std;
//
//int getTreeRoot(int n)
//{
//	int root = 0;
//	while (n)
//	{
//		root += n % 10;
//		n /= 10;
//	}
//	if (root < 10)
//		return root;
//	else
//		return getTreeRoot(root);
//}
//
//int main()
//{
//	int n = 0;
//
//	while (cin >> n)
//	{
//		int treeRoot = getTreeRoot(n);
//		cout << treeRoot << endl;
//	}
//	return 0;
//}

// write your code here cpp

#include<iostream>
#include<string>

using namespace std;

int getTreeRoot(int n)
{
    int root = 0;
    while (n)
    {
        root += n % 10;
        n /= 10;
    }
    if (root < 10)
        return root;
    else
        return getTreeRoot(root);
}

int main()
{
    string str;
    while (cin >> str)
    {
        int sum = 0;
        for (int i = 0; i < str.size(); ++i)
        {
            sum += str[i] - '0';
        }
        cout << getTreeRoot(sum) << endl;
    }
    return 0;
}