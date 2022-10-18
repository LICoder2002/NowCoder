class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param number int����
     * @return int����
     */

    // f0 = 1;
    // f1 = 1;
    // f2 = 2;
    // f3 = 4
     
    // f2 = f1 + f0;
    // f3 = f2 + f1 + f0;
    // fn = fn-1 + fn-2 + ... + f0;
    // fn = 2* fn-1

    int jumpFloorII(int number) {
        // write code here
        if (number == 0 || number == 1)
            return 1;

        int f1 = 1, f2 = 0;
        for (int i = 2; i <= number; ++i)
        {
            f2 = 2 * f1;
            f1 = f2;
        }
        return f2;
    }
};