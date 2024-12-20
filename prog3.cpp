#include<iostream>
using namespace std;

int area(int radius){
    return 3.14*radius*radius;
}
int area(int length, int breadth){
    return length*breadth;
}
double area(double base, double height){
    return 0.5*base*height;
}

int main(){
    int length, breadth, height, radius;
    cout<<"1 for rectangle, 2 for circle, 3 for triangle"<<endl;
    int choice;
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<area(2,3);
        break;

    case 2:
        cout<<area(3);
        break;

    case 3:
        cout<<area(2,3);
        break;
    
    default:cout<<"invalid choice";
        break;
    }
}