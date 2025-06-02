#include<iostream>
using namespace std;

int main(){
	string a []= {"changmin", "jaejong"};
	string b []= {"f8291", "n4810", "b0637"};
	int c[] = {2,3,4};
	int d[] = {2,4,8,10,12};

		cout<<"Hasil Penggabungan a dan b : "<<endl;
		cout<<"{";
		for(int i=0; i<2;){
		for(int j=0; j<3 ; j++){
		cout<<"(" + a[i] + "," + b[j] + ")";
		}
		i++;
	}
	cout<<"}"<<endl;
	
		cout<<"\nHasil Himpunan c habis membagi d :\n{";
		for(int k=0; k<3;){
		for(int l=0; l<5 ; l++){
		if (d[1] % c[k] == 0){
		cout<<"(" << c[k] <<","<<d[1]<<")";
		}
	}
	k++;
	}
cout<<"}\n"<<endl;
system("pause");
return 0;
}                      
