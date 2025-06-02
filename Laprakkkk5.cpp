#include<iostream>
#include<string>
using namespace std;

int main() {
const int jumlah = 3;

//f(x) = {(a,1), (b,2), (c,3)}
string f[100][100] = {
{"","a","b","c"},
{"1","1","2","3"}
};

//g(x) = {(1,x), (2,y), (3,3z}
string g[100][100] = {
{"","1","2","3"},
{"x","x","y","z"}
};

cout<< "f(x) = { ";
for(int i=1; i <= jumlah; i++){
cout<<"(" <<f[0][i] <<"," <<f[1][0]<< ")";
if (i != jumlah) cout<< ",";
}
cout<<"}"<< endl;

cout<<"g(x) = {";
for(int i=1; i <= jumlah; i++){
cout<<"(" <<g[0][i] <<"," <<g[1][0]<< ")";
if (i != jumlah) cout<< ",";
}
cout<< "}" <<endl;

cout<<"g(f(x)) = {";
bool first = true;
for(int i=1; i <= jumlah; i++){
string fx = f[1][i]; //hasil dari f
for(int j=1; j <= jumlah; j++){
if (fx == g[0][j]) {
if(!first)cout<< ", ";
cout<<"("<< f[0][i]<<","<<g[1][j]<<")";
first = false;
break;
}
}
}
cout<<"}"<<endl;

}
