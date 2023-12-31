#include<iostream>
#include<vector>
using namespace std;
int main(){

}
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int lo = 0; 
        int hi = n-1;
        int mid = 0;
        while(mid<=hi){
            if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                int temp  = nums[mid];
                nums[mid] = nums[hi];
                nums[hi] = temp;
                hi--;
            }
            else if(nums[mid]==0){
                int temp = nums[mid];
                nums[mid] = nums[lo];
                nums[lo] = temp;
                lo++;
                mid++;
            }
        }
    }
};