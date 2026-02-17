#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=i+1;
        int n = nums.size();
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                i++;
                nums[i]= nums[j];
                j++;
            }
        }
        return i+1;
    }
};

int main(){
    vector<int> nums = {1,1,2,2,3,4,4,5};
    int newLength = Solution().removeDuplicates(nums);
    cout << "New length of the array after removing duplicates: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for(int i=0; i<newLength; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}