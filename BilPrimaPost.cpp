#include <iostream>
using namespace std;

int main() {
    int input, hitung = 0, i = 1, b = 2;

    cout << "Inputkan Angka = ";
    cin >> input;

    // Pastikan input valid (positif)
    if (input <= 0) {
        cout << "Masukkan angka positif!" << endl;
        return 1;
    }

    if (b == 2) {
        cout << b << " ";
        b++;
        i++;
    }

    while (i <= input) {
        hitung = 0;
        for (int z = 2; z < b; z++) {
            if (b % z == 0) {
                hitung++;
            }
        }
        if (hitung == 0) {
            cout << b << " ";
            i++;
        }
        b++;
    }

    cout << endl; // Tambahkan baris baru untuk kebersihan output
    return 0;
}
