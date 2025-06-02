#include <iostream>
using namespace std;

class Hitung {
private:
    int n;
    float rumus, jumlah, total;

public:
    void input() {
        cout << "Masukkan nilai n: ";
        cin >> n;
    }

    float proses() {
        jumlah = 0;
        total = 0;
        rumus = -1;

        for (int j = 1; j <= n; j++) {
            rumus *= -1;
            total = rumus / j;
            jumlah += total;

            if (j == 1)
                cout << "(" << total << ")";
            else
                cout << ((total >= 0) ? "+" : "") << "(" << total << ")";
        }

        cout << "\nHasil penjumlahan deret = " << jumlah << endl;
        return jumlah;
    }
};

// Fungsi faktorial
int faktorial(int n) {
    int hasil = 1;
    for (int i = n; i >= 1; --i) {
        hasil *= i;
    }
    return hasil;
}

// Fungsi utama
int main() {
    int pilihan;

    cout << "Pilih program:\n";
    cout << "1. Hitung jumlah deret \n";
    cout << "2. Hitung faktorial dari n\n";
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    if (pilihan == 1) {
        Hitung deret;
        deret.input();
        deret.proses();
    } else if (pilihan == 2) {
        int n;
        cout << "Masukkan nilai n: ";
        cin >> n;
        cout << "Hasil faktorial dari " << n << " adalah " << faktorial(n) << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
    }
}

