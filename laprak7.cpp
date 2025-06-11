#include<iostream>
using namespace std;

const int maks =500;

class enkripsi {
	public:
		enkripsi();
		void deskripsi();
		void output();
		
	private:
		char chiper[maks];
		int key;
		char plain[maks];
		int panjang;
};

enkripsi::enkripsi(){
	cout<<"Masukkan kata: ";
	cin.getline(chiper, maks);
	cout<<"Masukkan key: ";
	cin>>key;
	cin.ignore();
	
	//menghitung panjang string manual
	panjang=0;
	while(chiper[panjang] != '\0') {
		panjang++;
	}
	
	//enkripsi langsung dikonstruktor
	for ( int i=0; i<panjang; i++){
		chiper[i]= (chiper[i] + key)%128;
	}
}

void enkripsi::deskripsi(){
		for ( int i=0; i<panjang; i++){
			plain[i]= (chiper[i] - key + 128) %128;
			chiper[i]= plain[i];
		
	}
}

void enkripsi::output(){
	for ( int i=0; i<panjang; i++){
		cout<<chiper[i];
	}
}

int main() {
	enkripsi proses;
	
	cout<<"setelah diEnkripsi: ";
	proses.output();
	cout<<endl;
	proses.deskripsi();
	cout<<"kembali diDeskripsi: ";
	proses.output();
	
	cout<<endl<<endl;
}
