#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int x = 0 , y = n-1 , mwater=0 ;
        while(x<y){
           int b = y-x;
           int l = min (height[y] ,height[x]);
           int cont = b*l ;
           mwater = max(mwater , cont);

           if(height[x] <height[y]){
                x++;
           }
           else{
            y--;
           }
           
        }
        return mwater;
    }
};

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << Solution().maxArea(height) << endl;
    return 0;
}