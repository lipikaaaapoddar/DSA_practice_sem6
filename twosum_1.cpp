#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // bruteforce approach --  O(n2)
        for(int i=0; i<nums.size() ; i++){
            for(int j=i+1; j<nums.size();j++){
                if((nums[i]+ nums[j]) == target){
                    return {i,j};
                }
            };
        };
    return {};
    }
};

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = Solution().twoSum(nums,target);
    cout << "Indices of the two numbers that add up to the target: " << result[0] << " and " << result[1] << endl;
    return 0;
}