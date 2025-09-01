#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> nums, int n){
    // int n = nums.size();
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,3,4,6,3,8,9,5};
    int n = 8;
    cout<<linearSearch(nums, n);
}