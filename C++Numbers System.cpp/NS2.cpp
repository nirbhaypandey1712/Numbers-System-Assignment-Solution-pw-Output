/*Q2 - Given a natural number, find the number of 0’s in the binary representation of that number.
Note: Don’t count the preceding zeros.
For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    unsigned int num;
    cout << "Enter a natural number: ";
    cin >> num;

    string binary_rep = "";
    while (num > 0) {
        binary_rep = (num % 2 == 0 ? '0' : '1') + binary_rep;
        num /= 2;
    }

    size_t first_one = binary_rep.find('1');
    string trimmed_binary_rep = binary_rep.substr(first_one);

    int zero_count = 0;
    for (char c : trimmed_binary_rep) {
        if (c == '0') {
            zero_count++;
        }
    }

    cout << "Number of zeros in the binary representation: " << zero_count << endl;

    return 0;
}