// 1.
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++)
        if(s[i]>=65 && s[i]<=90){
            s[i] += 32;
        }
        return s;
    }
};
// 2.使用cpp自带语言API
// class Solution {
// public:
//     string toLowerCase(string s) {
//         for (char& ch: s) {//遍历s中的每一个字符;char& ch 表示“引用字符”，意思是循环里直接操作 s 中的原字符，而不是副本。这样修改 ch 就会修改 s。
//             ch = tolower(ch);//to小写字母函数
//         }
//         return s;
//     }
// };

// 作者：力扣官方题解
// 链接：https://leetcode.cn/problems/to-lower-case/solutions/1151839/zhuan-huan-cheng-xiao-xie-zi-mu-by-leetc-5e29/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。