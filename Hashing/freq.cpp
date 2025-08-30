#include<bits/stdc++.h>
using namespace std;

int freq(vector<int> nums, int num){
    unordered_map<int,int> frq;

    for(int v : nums){
        frq[v]++;
    }

    return frq[num];
}

int main(){
    vector<int> nums = {2,1,3,4,5,6,4,5,6,7,8,9};
    int num = 6;
    cout<<freq(nums, num );
}