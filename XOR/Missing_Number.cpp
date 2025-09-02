#include<bits/stdc++.h>
using namespace std;

int missingNumner(vector<int> nums){
    int n = nums.size();
    int xor1 = 0, xor2 = 0;
    for(int i=0; i<n; i++){
        xor1 = xor1 ^ i;
        xor2 = xor2 ^ nums[i]; 
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}
int main(){
    vector<int> nums = {0,1,2,4,5};
    int N = nums.size();
    cout<<missingNumner(nums);
}