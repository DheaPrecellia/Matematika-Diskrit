#include <iostream>

using namespace std;

int main() {
    int x, a;
    char i;
    
        bool isPrime = true; //prima=benar

        cout << "PROGRAM UNTUK MEMERIKSA BILANGAN PRIMA" << endl << endl;
        cout << "Masukkan bilangan untuk dicek: ";
        cin >> x;

        if (x < 2) {
            isPrime = false;
        } else {
        	//menentukan apakah bilangan tersebut prima atau bukan
            for (a = 2; a <= x / 2; ++a) {
                if (x % a == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << x << " merupakan bilangan prima." << endl;
        } else {
            cout << x << " bukan merupakan bilangan prima" << endl;
        } 
    return 0;
} 

