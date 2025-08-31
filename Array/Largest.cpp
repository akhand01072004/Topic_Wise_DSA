#include<bits/stdc++.h>
using namespace std;

int Largest_ele(vector<int> nums ){
    int lg = nums[0];
    for(int i=0; i<nums.size(); i++){
        if(nums[i] > lg){
            lg = nums[i];
        }
    }
    return lg;
}

int main(){
    vector<int> nums = {1,2,3,4,5,67,8,9};
    cout<< Largest_ele(nums);     
}