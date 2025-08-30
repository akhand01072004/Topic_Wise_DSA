#include<bits/stdc++.h>
using namespace std;

int finbonaci(int n){
    if(n <= 1){
        return n;
    }
    return finbonaci(n-1) + finbonaci(n-2);
}

int main(){
    int n= 4;
    cout<<finbonaci(n);
}
