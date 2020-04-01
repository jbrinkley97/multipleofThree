#include <iostream>
using namespace std;
int main() {
    int num1;
    int multiplier;
    int remainder;
    cout << "\n\nCheck if a number is a multiple of 3!\nEnter the number here: ";
    cin >> num1;
    remainder = num1 % 3;
    multiplier = (num1 - remainder) / 3;
    if (remainder == 0) {
        cout << "\nThat number IS a multiple of 3!\n";
        cout << multiplier << " * 3 = " << num1;
        main();
    }
    else {
        cout << "\nSorry, but that number doesn't seem to be a multiple of 3\n";
        cout << num1 << " / 3 = " << multiplier << " with a remainder of " << remainder;
        main();
    }
}