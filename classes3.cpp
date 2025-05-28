#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setValues(double l, double w) {
        length = l;
        width = w;
    }

    
    void displayArea() {
        cout<<"Area:"<<length*width<<endl;
    }
};



int main() {
    Rectangle rect;
    double l,w;
    cout<<"enter the length of rectangle";
    cin>>l;
    cout<<"enter the width of rectangle";
    cin>>w;
    rect.setValues(l,w);
    rect.displayArea();

    return 0;
}