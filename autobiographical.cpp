#include <iostream>
using namespace std;

int main() {
    int num, temp, length = 0;
    int digits[10] = {0};     // To store digits of the number
    int count[10] = {0};      // To count digit frequencies

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    temp = num;

    // Extract digits and store them in reverse
    while (temp > 0) {
        digits[length] = temp % 10;
        temp /= 10;
        length++;
    }

    // Count occurrences of digits 0 to length-1
    for (int i = 0; i < length; i++) {
        if (digits[i] < length) {
            count[digits[i]]++;
        }
    }

    // Compare original digits with count[] (remember digits[] is in reverse)
    int flag = 1;
    for (int i = 0; i < length; i++) {
        if (digits[length - 1 - i] != count[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << num << " is an autobiographical number." << endl;
    else
        cout << num << " is NOT an autobiographical number." << endl;

    return 0;
}
