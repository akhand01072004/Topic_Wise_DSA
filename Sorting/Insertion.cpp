#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(vector<int>& nums){
    for(int i=1; i<nums.size(); i++){
        int mn = nums[i];
        j=i;
        while( mn < nums[j-1]){
            nums[j-1] = mn;
            j--;
        }
        swap()
    }
    for(int v : nums){
        cout<< v<< " ";
    }
}

int main(){
    vector<int> nums = {13,46,24,50,9};
    Insertion_Sort(nums);
}