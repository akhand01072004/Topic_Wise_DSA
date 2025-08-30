#include<bits/stdc++.h>
using namespace std;

void recursion(string name, int n, int i=0){
    if(i==n){
        return;
    }
    cout<<name<<endl;
    recursion(name,n,i+1);
}

int main(){
    string name;
    int n;
    cout << "Enter your Name : ";
    cin >> name;
    cout<<endl;
    cout << "Enter the number: ";
    cin >> n;
    recursion(name,n);
}