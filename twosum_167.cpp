#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i =0 , j=n-1;
        while(i<j){
            int sum = numbers[i]+numbers[j];
            if(sum==target){
                return{i+1,j+1}; }
            else if (sum<target){
                i++; }
            else{
                j--;}
        }
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