#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    unordered_map<int, int> mp;

    for(int i =0; i<n;i++){
        mp[arr[i]]+=1;
        
        if(mp[arr[i]]>=n/2){
            return arr[i];
        }
    }

    return -1;
}

int main() {
    int size;
    cin>>size;
    cout<<"enter elements: ";
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    if (majorityElement(arr,size)!=-1){
        cout << "majority element is " <<majorityElement(arr,size) <<endl;
    }
    else{
        cout<<"no majority element"<<endl;
    }
    

    return 0;
}