#include<bits/stdc++.h>
using namespace std;

int second_Smallest(vector<int> nums) {
    int firstSmallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int x : nums) {
        if (x < firstSmallest) {
            secondSmallest = firstSmallest;
            firstSmallest = x;
        } else if (x > firstSmallest && x < secondSmallest) {
            secondSmallest = x;
        }
    }

    return (secondSmallest == INT_MAX) ? -1 : secondSmallest;
}


int main(){
    vector<int> nums= {1,4,2,6,7,8};
    cout<<second_Smallest(nums);
}