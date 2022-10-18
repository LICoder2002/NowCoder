class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param number int整型
     * @return int整型
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