#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=n;
    int count=0;
    while(temp>0){
        count++;
        temp = temp/10;
    }

    cout<<count;
}