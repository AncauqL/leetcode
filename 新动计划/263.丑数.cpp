class Solution {
public:
    bool isUgly(int n) {
        if (n<=0)
        return 0;
        while(n%2==0){
            n /= 2;
        }
        while(n%3==0){
            n /= 3;
        }
        while(n%5==0){
            n /= 5;
        }
        return n==1;
    }
};

// 优化:
// vector<int> factors = {2, 3, 5};
//         for (int factor : factors) {
//             while (n % factor == 0) {
//                 n /= factor;
//             }
//         }

// 作者：力扣官方题解
// 链接：https://leetcode.cn/problems/ugly-number/solutions/712106/chou-shu-by-leetcode-solution-fazd/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。