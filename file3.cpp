#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string text;
    ifstream Myfile("C:\\Users\\Krishna Moorthy\\Desktop\\Nishkala github\\PARVAM_CPP\\sample.txt");
    while(getline(Myfile,text))
    cout<<text;
    Myfile.close();
    return 0;
}