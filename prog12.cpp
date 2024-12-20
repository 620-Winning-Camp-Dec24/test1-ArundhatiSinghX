#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int singleoccurance(int arr[], int n){
    unordered_map <int, int> mp;
    for(int i =0 ; i < n; i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        if (x.second == 1){
            return x.first;
        }
        
    }
    return -1;

}

int main(){
    int n;
    cin>>n;

    cout<<"enter elemets: "<<endl;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    if(singleoccurance(arr,n)!=-1){
        cout<<"element with single occurance: "<<singleoccurance(arr,n);
    }
    else{
        cout<<"no element with single occurance";
    }
    
}