#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b);
};
int Calculator::add(int a, int b) {
    return a + b;
}
int main() {
    Calculator calc;
    cout << "Sum: " << calc.add(5, 3) << endl;
    return 0;
}