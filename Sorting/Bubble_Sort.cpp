#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(vector<int> nums ){
    int n= nums.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j] ,nums[j+1]);
            } 
        }
    }

    for(int v : nums){
        cout<< v <<" ";
    }
}

int main(){
    vector<int> nums = {13,46,24,50,9};
    Bubble_Sort(nums);
}