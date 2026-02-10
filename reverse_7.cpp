#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev_no = 0;
        while (x!=0){
            int y= x % 10;
            if (((rev_no) > INT_MAX /10) ||((rev_no) < INT_MIN /10)) {
                return 0; }
            rev_no = rev_no * 10 + y;
            x=x/10;
        }
        return rev_no;
    }
};

int main(){
    cout << Solution().reverse(123) << endl;
    cout << Solution().reverse(-123) << endl;
    return 0;
}
