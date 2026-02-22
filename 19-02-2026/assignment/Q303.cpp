#include <vector>
#include <iostream>
using namespace std;

class NumArray {
public:
    std::vector<int> prefix;
    NumArray(vector<int>& nums) {
        int i;
    //changes size of prefix vector equal to the size of nums vector 
        prefix.resize(nums.size());
        if(nums.size() == 0) return;
       
        prefix[0]=nums[0];
        for(i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left>0){
           return prefix[right]-prefix[left-1];
        }
        else{
            return prefix[right];
        }

        }
};
int main(){
    vector<int> nums={2,4,5,7};
    NumArray obj(nums);

    cout<<obj.sumRange(1,3);
}