#include <iostream>
using namespace std;

const int MAKS = 500;

class Enkripsi {
public:
    Enkripsi();
    void deskripsi();
    void output();

private:
    char chiper[MAKS];
    int key;
    char plain[MAKS];
    int panjang;
};

Enkripsi::Enkripsi() {
    cout << "Masukkan kata : ";
    cin.getline(chiper, MAKS);
    cout << "Masukkan key  : ";
    cin >> key;
    cin.ignore();

    // Mengitung panjang string manual
    panjang = 0;
    while (chiper[panjang] != '\0') { 
        panjang++;
    }

    // Enkripsi langsung di konstruktor
    for (int i = 0; i < panjang; i++) {
        chiper[i] = (chiper[i] + key) % 128;
    }
}

void Enkripsi::deskripsi() {
    for (int i = 0; i < panjang; i++) {
        plain[i] = (chiper[i] - key + 128) % 128;
        chiper[i] = plain[i];
    }
}

void Enkripsi::output() {
    for (int i = 0; i < panjang; i++) {
        cout << chiper[i];
    }
}

int main() {
    Enkripsi proses;

    cout << "Setelah diEnkripsi: ";
    proses.output();
    cout<<endl;
    proses.deskripsi();
    cout << "Kembali diDeskripsi: ";
    proses.output();

    cout << endl << endl;
    return 0;
}

