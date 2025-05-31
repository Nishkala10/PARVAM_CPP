#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char word[100];
    cout << "Enter a word: ";
    cin >> word;

    int length = strlen(word);
    cout << "Length of the word is: " << length << endl;

    return 0;
}