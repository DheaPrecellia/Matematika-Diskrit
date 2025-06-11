#include <iostream>
#include <string>

using namespace std;

int main() {
    int y, temp, v, w, z;
    int* x; // Deklarasi pointer untuk array dinamis

    z = 8;
    x = new int[z + 1]; // Alokasi array dinamis ukuran z+1 (indeks 0 sampai 8)

    // Inisialisasi data
    x[1] = 9;
    x[2] = 2;
    x[3] = 1;
    x[4] = 4;
    x[5] = 11;
    x[6] = 10;
    x[7] = 18;
    x[8] = 6;

    cout << "Data Belum Terurut:" << endl;
    w = 1;
    while (w <= z) {
        cout << x[w] << " ";
        w++;
    }
    cout << endl << endl;

    v = 1;
    while (v <= z - 1) {
        cout << "(Langkah ke-" << v << ") - " << endl;
        y = z;
        while (y >= v + 1) {
            if (x[y] < x[y - 1]) {
                temp = x[y];
                x[y] = x[y - 1];
                x[y - 1] = temp;
            }
            y--;
        }
        w = 1;
        while (w <= z) {
            cout << x[w] << " ";
            w++;
        }
        cout << endl;
        v++;
    }

    cout << endl << "Data Telah Terurut:" << endl;
    w = 1;
    while (w <= z) {
        cout << x[w] << " ";
        w++;
    }
    cout << endl;

    delete[] x; // Dealokasi memori array dinamis

    return 0;
}
