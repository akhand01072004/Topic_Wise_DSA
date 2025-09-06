#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> nums, int k){
    unordered_map<int,int> preSum;
    int maxlen = -1;
    int sum = 0;
    // preSum[num[0]]= 
    for(int i=0; i<nums.size(); i++){
        sum += nums[i];
        if(sum == k){
            maxlen = max(maxlen, i+1);
        }
        if(preSum.find(sum - k) != preSum.end()){
            maxlen = max(maxlen,i- preSum[sum-k]);
        }
        else{
            preSum[sum] = i;
        }

    }
    return maxlen;
}

int main(){
    vector<int> nums = {1,-2,2,1,1,2};
    int k = 3;
    cout<<longestSubarray(nums,k);

}