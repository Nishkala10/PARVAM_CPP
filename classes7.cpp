#include <iostream>
using namespace std;

class Shape {
public:
    void calculatearea() {
        cout <<"Area not defined for generic shape"<<endl;
    }
};
int main()
{
    Shape s;
    s.calculatearea();
    return 0;
}