#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num && num > 1)
        cout << num << " is an Armstrong number.";
    if(result!= num)
        cout << num << " is not an Armstrong number.";
       else
        	cout<<"Invalid";

    return 0;
}
