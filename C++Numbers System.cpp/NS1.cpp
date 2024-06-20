/*Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format Without Bitset*/

#include <iostream>
using namespace std;
int main () {
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }

    string binary_sum = "";
    int num = sum;
    while (num > 0)
    {
        binary_sum = (num % 2 == 0 ? "0" : "1") + binary_sum;
        num /= 2;
    }

    cout << "Binary representation: " << binary_sum << endl;
    return 0;
}
