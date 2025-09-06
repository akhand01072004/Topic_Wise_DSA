#include<bits/stdc++.h>
using namespace std;

int longestSubarrayK(vector<int> nums, long k){
    int left = 0;
    int sum = 0;
    int maxLen = -1;
    for(int right=0; right< nums.size(); right++){
        sum += nums[right];
        while(sum > k &&  left < right){
            sum -= nums[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
    }
    return maxLen;
}

int main(){
    vector<int> nums= {1,2,3,4,1,1,1,4,3};
    int k = 3;
    cout<<longestSubarrayK(nums,k);

}