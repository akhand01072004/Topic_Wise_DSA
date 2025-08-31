#include<bits/stdc++.h>
using namespace std;

bool checkSortesArray(vector<int> nums, int n){
    if( n == 1){
        return true;
    }
    bool res = true;
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1] <= nums[i]){
            continue;
        }
        else{
            res = false;
            break;
        }
    }
    return res;
        
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,9,8};
    int n = nums.size();
    cout<<checkSortesArray(nums,n);

}