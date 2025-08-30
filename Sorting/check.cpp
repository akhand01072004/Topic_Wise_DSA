#include<bits/stdc++.h>
using namespace std;

void check(vector<int>& nums ){
    for(int i=0; i<=nums.size(); i++){
        nums[i] = i;
    }
}

int main(){
    vector<int> nums = {11,3,2,4,5};
    check(nums);
    for(int v : nums){
        cout<< v << " ";
    }
}