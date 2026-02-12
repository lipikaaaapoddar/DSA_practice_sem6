#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0 ;
        
        while(n>0){
            int d=n%10;
            product = product * d;
            sum = sum + d;
            n=n/10;
        }
    
        int result = product - sum;
        return result;
    }
};

int main(){
    cout << Solution().subtractProductAndSum(234) << endl;
    cout << Solution().subtractProductAndSum(123) << endl;
    return 0;
}
