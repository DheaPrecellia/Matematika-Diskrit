#include<iostream>
using namespace std;

//fungsi rekursif untuk menghitung faktorial
long int fak_rekursif(int n) {
if (n <= 1)
return 1;
else
return n * fak_rekursif(n -1);
}

int main(){
int n =5;
cout << n << " faktorial = " << fak_rekursif(n) << endl;
return 0;
}
