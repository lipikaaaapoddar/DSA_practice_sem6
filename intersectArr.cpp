#include <iostream>
#include <vector>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> res;
    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                res.push_back(nums1[i]);
                // to avoid 2 similar data confliction
                nums2[j]=-1; 
                break;
            }
        }
    }
    return res;
}

int main(){
    vector<int> nums1 = {1,2,2,3,4};
    vector<int> nums2 = {2,2,3,3};
    cout << "brute force approach" << endl;
    vector<int> ans = intersect(nums1,nums2);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}