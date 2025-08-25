class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<=0)
        return 0;
        else {
            while(n%3==0){
                n /= 3;
            }
            if (n==1)
            return 1;
            else return 0;
        }
    }
};

// if (n==1)
//     return 1;
// else return 0;
// 这三行可以优化为
// // return n==1;
// 可以显著减少消耗的内存.