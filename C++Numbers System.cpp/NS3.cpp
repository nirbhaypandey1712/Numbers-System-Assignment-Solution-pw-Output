//Q3. Given two binary numbers, return the greatest of these numbers in decimal format ?

#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int greatestBinary(string bin1, string bin2) {
    int dec1 = bitset<32>(bin1).to_ulong();
    int dec2 = bitset<32>(bin2).to_ulong();

    return (dec1 > dec2) ? dec1 : dec2; // return the greatest decimal number
}

int main() {
    string bin1, bin2;
    cout << "Enter the first binary number: ";
    cin >> bin1;
    cout << "Enter the second binary number: ";
    cin >> bin2;
    int result = greatestBinary(bin1, bin2);
    cout << "The greatest binary number is: " << result << endl;
    return 0;
}