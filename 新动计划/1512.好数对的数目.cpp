// 1.暴力枚举
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])
                count++;
            }
        }
        return count;
    }
};
// 2.哈希表
// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) {
//         unordered_map <int, int> m;
//         for (int num: nums) {
//             ++m[num];
//         }

//         int ans = 0;
//         for (const auto &[k, v]: m) {
//             ans += v * (v - 1) / 2;
//         }

//         return ans;
//     }
// }
/*
哈希表做法:先遍历数组,记录下出现的数字及出现的次数;每次记录到相同的数字,对应的count值加一,这代表该数可以与以前的数形成Cn2个好数对;遍历完成后得到每个数的count值,推算出好数对的个数.
*/

// 作者：力扣官方题解
// 链接：https://leetcode.cn/problems/number-of-good-pairs/solutions/336449/hao-shu-dui-de-shu-mu-by-leetcode-solution/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。