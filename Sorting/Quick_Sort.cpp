#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>& nums, int low,int high ){
    int pivot = nums[low];
    int i = low;
    int j = high;
    while( true){
        while(pivot > nums[i]){
            i++;
        }
        while(pivot < nums[j]){
            j--;
        }
        if(i >= j){
            return j;
            
        }
        swap(nums[i],nums[j]);
    }
}

void  quick_Sort(vector<int>& nums,int low, int high){
   if(low < high){
    int partition = fun(nums,low,high);
    quick_Sort(nums, low, partition);
    quick_Sort(nums, partition+1, high); 
   }

}

int main(){
    vector<int> nums = {2,5,1,6,4,7,9,8};
    int low = 0;
    int high = nums.size()-1;

    quick_Sort(nums, low, high);

    for(int v : nums){
        cout<< v << " ";
    }
    return 0;
}