#include<iostream>
#include<cmath> //untuk abs()
using namespace std;

class hitung{
public:
int proses();
void input();
private:
int n;
float rumus,jumlah,total;
};

void hitung::input(){
cout<<"Tentukan nilai n:";
cin>>n;
cout<<endl;
}

int hitung::proses(){
jumlah=0;
total=0;
rumus=-1;

cout<<"Deret:";

for(int j=1; j<=n; j++){
rumus *=-1;
total= rumus/ static_cast<float>(j);
jumlah +=total;

if (j==1){
cout<<"(" <<total<<")";
} else {
if (total >=0)
cout<<"+("<<total<<")";
else
cout<<"-("<<abs(total)<<")";
}
}

cout<<endl<<"hasil penjumlahan deret="<<jumlah<<endl;
return jumlah;
}

int main(){
cout<<"program sederhana menghitung jumlah dari rumus:"<<endl;
cout<<"1 - (1/2) + (1/3) - (1/4) + ...+ (1/n)"<<endl<<endl;

hitung deret;
deret.input();
deret.proses();
}
