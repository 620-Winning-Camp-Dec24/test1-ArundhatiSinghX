#include <iostream>
using namespace std;

int main(){
    int number,reverse=0;
    cin>>number;
    int temp=number;
    while(temp>0){
        int lastdigit = temp%10;
        reverse= reverse*10+lastdigit;
        temp=temp/10;
    }
    cout<<reverse;
}