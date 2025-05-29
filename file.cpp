#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream Myfile("C:\\Users\\Krishna Moorthy\\Desktop\\Nishkala github\\PARVAM_CPP\\sample.txt");
    Myfile << "Hello, World!" << endl;
    Myfile.close();
    return 0;
}