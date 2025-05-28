#include<iostream>
using namespace std;

class student
{
public:
    int id; 
    string name; 

    student(int i, string n) 
    {
        id = i;
        name = n;
    }

    void display() 
    {
        cout << id << " " << name << " " << endl;
    }
};

int main(void) 
{
    student s1 = student(45,"Nishkala"); 
    student s2 = student(71, "Yuktha");
    s1.display();
    s2.display();
    return 0;
}