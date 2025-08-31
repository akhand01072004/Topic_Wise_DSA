#include<bits/stdc++.h>
using namespace std;

void drop_Duplicate(vector<int>& nums){
    int i = 0;
    for(int j=1; j<nums.size(); j++){
        if(nums[i] != nums[j]){
            nums[i+1] = nums[j];
            i++;
        }
    }
    // return nums;

}

int main(){
    vector<int> nums = {1,1,1,2,2,3,4,5,6,6,6};
    drop_Duplicate(nums);
    for(int v : nums){
        cout<< v << " ";
    }
}