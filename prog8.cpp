//demonstrate polymorphism by caculating the area of dufferent shapes by using a base class shape and derived classes for circle triangle and rectangle each derived class should override a virtual function to compute the area of respective shape.User input length breadth radius base and height

#include<iostream>
using namespace std; 

class Shape {
    public:
    virtual void area() = 0;    
};

class Circle : public Shape{
    public:
    void area(){
        int radius;
        cin>>radius;
        cout<< 3.14*radius*radius;
    }
};

class Rectangle : public Shape{
    public:
    void area(){
        int length, breadth;
        cin>>length>>breadth;
        cout<<length*breadth; 
    }
};

class Triangle : public Shape{
    public:
    void area (){
        double base, height;
        cin>>base>>height;
        cout<<0.5*base*height;
    }
};


int main() {
    int choice;
    double length, breadth, radius, base, height;

    cout << "1 for Circle 2 for Rectangle 3 for Triangle ";
    cin >> choice;

        Shape* shape = nullptr; 

    switch (choice) {
        case 1:
            shape = new Circle(); 
            cout << "Enter radius of the circle: ";
            shape->area();
            break;

        case 2:
            shape = new Rectangle();
            cout << "Enter length and breadth of the rectangle: ";
            shape->area();
            break;

        case 3:
            shape = new Triangle();
            cout << "Enter base and height of the triangle: ";
            shape->area();
            break;

        default:
            cout << "Invalid choice!";
            return 1;
    }


    return 0;

}

