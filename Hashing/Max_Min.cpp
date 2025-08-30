#include<bits/stdc++.h>
using namespace std;

pair<int,int> freq_count(vector<int> nums){
    int min_count = INT_MAX;
    int max_count = INT_MIN;
    int n = nums.size();
    unordered_map<int,int> freq;
    for(int i=0; i<n; i++){
        freq[nums[i]]++;
        min_count = min(min_count,freq[nums[i]]);
        max_count = max(max_count,freq[nums[i]]);
    }
    return {min_count,max_count};
}

int main(){

    vector<int> nums = {1,2,4,2,3,4,1,5,6,7,8,9,1,4,4,4,4};
    pair<int,int> res = freq_count(nums);
    cout<<"min freq : "<<res.first<<"  max freq : "<<res.second<<endl;

}