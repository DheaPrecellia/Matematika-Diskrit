#include<iostream>
using namespace std;

int main(){
int a[100];
int b[100];
int jml_a, jml_b;

	cout<<"masukkan jumlah elemen himpunan A:";
	cin>>jml_a;
	cout<<"masukkan elemen himpunan A (integer):";
	for(int i=0; i<jml_a; i++){
	cin>>a[i];
		}
	
	cout<<"masukkan jumlah elemen himpunan B:";
	cin>>jml_b;
	cout<<"masukkan elemen himpunan B (integer):";
	for(int j=0; j<jml_b; j++){
	cin>>b[j];
	}

		cout<<"Relasi'lebih besar lebih dari atau sama dengan' dari A ke B :";
		for(int k=0; k<3;){
		for(int l=0; l<5 ; l++){
		if (a[l] % b[k] == 0){
		cout<<"(" << a[k] <<","<<b[l]<<")";
		}
	}
	k++;
}
cout<<"}\n"<<endl;
system("pause");
}
