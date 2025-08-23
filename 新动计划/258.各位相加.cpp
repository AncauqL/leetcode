//模拟:模拟各位相加的过程,最直观
class Solution {
public:
    int addDigits(int num) {
        int sum=10;
        while(sum/10!=0){
            sum = 0;
            do{
                sum += num%10;
                num /= 10;
            }while(num!=0);
            num = sum;
        }
        return sum;
    }
};
//数学:"模9同余"