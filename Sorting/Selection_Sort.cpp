#include<bits/stdc++.h>
using namespace std;

vector<int> selection_sort(vector<int> nums){
    for(int i=0; i<nums.size()-1; i++){
        int mini = i;
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j] < nums[mini]) mini = j;
        }
        swap(nums[i], nums[mini]);

    }
    return nums;
}

int main(){

    vector<int> nums = {8,9,4,5,10,5,7,6};
    vector<int> res = selection_sort(nums);
    for(int v:res){
        cout<<v<<" ";
    }

}