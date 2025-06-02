#include<iostream>
using namespace std;

//fungsi untuk memutlakkan nilai negatif
double Absolut(double x) {
if (x < 0) x = -x;
return x;
}

int main(){
double nilai = -123.45;
cout<< nilai << " nilai mutlaknya adalah " << Absolut(nilai) <<endl;
return 0;
}
