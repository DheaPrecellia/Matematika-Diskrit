#include <iostream>
#include <cstring>
#define maks 500
using namespace std;

class Enkripsi {
public:
    Enkripsi();
    void enkripsi();
    void deskripsi();
    void output();
private:
    char chiper[maks];
    int key;
    char plain[maks];
};

Enkripsi::Enkripsi() {
    cout << "Masukkan kata : ";
    cin.getline(chiper, sizeof(chiper));
    cout << "Masukkan key : ";
    cin >> key;
    cout << endl;
}

void Enkripsi::enkripsi() {
    for (int i = 0; i < strlen(chiper); i++) {
        cout << chiper[i] << "(" << int(chiper[i]) << ") ";
        chiper[i] = (chiper[i] + key) % 128;
    }
    cout << endl;
}

void Enkripsi::deskripsi() {
    for (int i = 0; i < strlen(chiper); i++) {
        plain[i] = (chiper[i] - key) % 128;
        if (plain[i] < 0) plain[i] += 128; // Pastikan nilai tidak negatif
        chiper[i] = plain[i]; // Perbarui chiper dengan hasil dekripsi
    }
}

void Enkripsi::output() {
    for (int i = 0; i < strlen(chiper); i++) {
        cout << chiper[i];
    }
    cout << endl;
}

int main(int argc, char *argv[]) {
    Enkripsi Deskripsi;
    Deskripsi.enkripsi();
    cout << "\nSetelah diEnkripsi : ";
    Deskripsi.output();
    Deskripsi.deskripsi();
    cout << "\nKembali diDeskripsi : ";
    Deskripsi.output();
    cout << endl << endl;
    system("pause");
    
}
