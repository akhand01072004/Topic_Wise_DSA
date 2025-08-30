#include<bits/stdc++.h>
using namespace std;

void numPrint(int n){
    if(n == 0) return;
    cout<<n<<endl;
    numPrint(n-1);
}

int main(){
    int n;
    cin>>n;
    numPrint(n);
}
