#include<bits/stdc++.h>
using namespace std;

// pair<int,int> twoSum(vector<int> nums, int k){ // Brute Force bae
//     pair<int,int> res = {-1,-1};
//     for(int i=0; i< nums.size(); i++){
//         int sum = 0;
//         for(int j=i+1; j<nums.size(); j++){

//             sum = nums[i] + nums[j];
//             if(sum == k){
//                 return {i,j};
//             }

//         }
//     }
//     return res;
// }

pair<int,int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;

        for(int i=0; i<nums.size(); i++){
            int dif = target - nums[i];
            if(freq.find(dif) != freq.end()){
                return {i,freq[dif]};
            }
            freq[nums[i]] = i;
        }

        return {-1,-1};
}

int main(){
    vector<int> nums = {2,6,5,8,11};
    int k=14;
    pair<int,int> res = twoSum(nums,k);
    cout<<"{ "<<res.first<<" , "<<res.second<<" }";

}