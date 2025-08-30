#include<bits/stdc++.h>
using namespace std;

int mountain_Array(vector<int> nums){
    int left=1;
    int right = nums.size()-2;
    while(left < right){
        int mid = left + (right-left)/2;
        if(nums[mid] < nums[mid-1]){
            left = mid+1;
        }
        else{
            right = mid;
        }
    }
    return left;
}
int main(){
    vector<int> nums = {0,10,5,2};
    cout<<mountain_Array(nums);
}