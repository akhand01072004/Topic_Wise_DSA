#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(vector<int>& nums){
    for(int i=1; i<nums.size(); i++){
        int j = i;
        int ele = nums[i];
        while(j> 0 && ele < nums[j-1]){
            nums[j] = nums[j-1];
            j--;
        }
        nums[j] = ele;
    }
    
}

int main(){
    vector<int> nums = {13,46,24,50,9};
    Insertion_Sort(nums);
    for(int v : nums){
        cout<< v << " ";
    }
}