#include <iostream>
#include "fmea.hpp"

using namespace std;

int main() {
    cout << "===== Project 2D: RSA Encrypt/Decrypt using FMEA =====\n";

    uint64_t n, exp, x;
    int mode;

    cout << "Enter modulus n: ";
    cin >> n;

    cout << "Choose mode (1 = Encrypt with e, 2 = Decrypt with d): ";
    cin >> mode;

    if (mode == 1) {
        cout << "Enter public exponent e: ";
        cin >> exp;
    } else if (mode == 2) {
        cout << "Enter private exponent d: ";
        cin >> exp;
    } else {
        cerr << "Invalid choice.\n";
        return 1;
    }

    cout << "Enter the number (less than n): ";
    cin >> x;

    uint64_t result = fastModExp(x, exp, n);

    if (mode == 1)
        cout << "\nEncrypted ciphertext = " << result << endl;
    else
        cout << "\nDecrypted plaintext = " << result << endl;

    return 0;
}
