#include <iostream>
#include <cmath>

using namespace std;

/*Nama : Retno Lestari
Kelas : D
NPM : 2117051077*/


int main(){
	
	cout<<"=======Menentukan Jumlah Nilai Suku ke-n Dalam Sistem Deret Aritmatika======="<<endl;
	
	//input
	int n,a,b;
	cout<< "Baris yang ingin dicari : ";
	cin>> a;
	
	cout<< "Suku awal               : ";
	cin>> b;
	
	cout<< "Beda bilangan           : ";
	cin>> n;
	
	//output
	cout<<endl;
	cout<<"Jumlah bilangan hingga suku ke- n dari bilangan matematika adalah "<<endl;
	cout<< ": "<<b+(n-1)*b<<endl;
	

}
	

