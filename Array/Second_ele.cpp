#include<bits/stdc++.h>
using namespace std;

int secondLargest_ele(vector<int> nums, int n){
   int firstLargest = INT_MIN;
   int secondLargest = INT_MIN;

   for(int i=0; i<nums.size(); i++){
    if(nums[i] > firstLargest){
        secondLargest = firstLargest;
        firstLargest = nums[i];
    }
    else if(nums[i] > secondLargest && nums[i] != firstLargest){
        secondLargest = nums[i];
    }
   }
   return (secondLargest == INT_MIN) ? -1 : secondLargest;
}
int main(){
    vector<int> nums = {1,5,3,7,6,8,9,12,11,17};
    int n = nums.size();
    cout<<secondLargest_ele(nums,n);
}