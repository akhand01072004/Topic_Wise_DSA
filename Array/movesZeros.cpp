#include<bits/stdc++.h>
using namespace std;

// void moveZeros(vector<int>& nums){   // Brute Force Approach
//     int n=nums.size();
//     vector<int> temp;
//     for(int i=0; i<n; i++){
//         if(nums[i] != 0){
//             temp.push_back(nums[i]);
//         }
//     }
//     for(int i=0; i<temp.size(); i++){
//         nums[i] = temp[i];
//     }
//     for(int j=temp.size(); j<n; j++){
//         nums[j] = 0;
//     }
    
    
// }

void movesZeros(vector<int>& nums){
    int n=nums.size();
    int i = -1;
    for(int j=0; j<nums.size(); j++){
        if(nums[j] == 0){
            i = j;
            break;
        }
    }

    for(int j=i+1; j<nums.size(); j++){
        if(nums[j] != 0){
            swap(nums[j],nums[i]);
            i++;
        }

    }
}

int main(){
    vector<int> nums = {1,0,2,3,0,4,5,0};
    movesZeros(nums);
    for(auto c : nums){
        cout<<c<<" ";
    }

}