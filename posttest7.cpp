#include <iostream>

using namespace std;

int main() {
    int x, a;
    int pilihan;
    char i, ulangi;
    
        bool isPrime = true; //prima=benar

	do{
		cout<<"===MENU PROGRAM==="<<endl;
		cout<<"1.cek bilangan prima"<<endl;
		cout<<"2.enkripsi dan deskripsi (caesar cipher)"<<endl;
		cout<<"Pilih menu(1/2):";
		cin>>pilihan;
		cout<<endl;
	
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
        
        cout << "Ulangi (y/n) ? ";
        cin >> ulangi;

    } while (ulangi == 'y' || ulangi == 'Y');
    cout<<endl;
    return 0;
} 
