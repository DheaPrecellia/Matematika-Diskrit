#include <iostream>
using namespace std;

int main() {
    int x, a;
    bool bilPrima;
    char ulangi;

    do {
        // Bersihkan layar
        system("cls");

        cout << "PROGRAM UNTUK MEMERIKSA BILANGAN PRIMA" << endl;
        cout << "Masukan Bilangan Untuk Di Cek : ";
        cin >> x;

        // Inisialisasi bilPrima sebagai true
        bilPrima = true;

        // Cek apakah x adalah bilangan prima
        if (x <= 1) {
            bilPrima = false;
        } else {
            for (a = 2; a <= x - 1; a++) {
                if (x % a == 0) {
                    bilPrima = false;
                    break;
                }
            }
        }

        // Tampilkan hasil
        if (bilPrima) {
            cout << x << " merupakan Bilangan Prima" << endl;
        } else {
            cout << x << " bukan merupakan Bilangan Prima" << endl;
        }

        cout << "Ulangi (y/n) ? ";
        cin >> ulangi;

    } while (ulangi == 'y' || ulangi == 'Y');

    cout << "Terima Kasih" << endl;

    return 0;
}


void enkripsi::langkah enkripsi(){
	cout<<"\nlangkah enkrip:\n";
	for(int i=0; i<panjang; i++){
		cout<<chiper[i] <<"hasil ASCII + key";
		int asal =(chiper[i] -key +128) %128;
		
	cout<<"<---dari"<<char(asal)<<"(ASCII: "<<asal<<")\n";
	}
}"
