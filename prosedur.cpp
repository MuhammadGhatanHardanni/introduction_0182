#include <iostream>
using namespace std;

//numeric panjang, lebar, luas
double panjang;
double lebar;
double luas;

void inputdata() {
	cout << "Masukkan panjangnya = ";
	//accept panjang
	cin >> panjang;
	cout << "Masukkan lebarnya = ";
	//accept lebar
	cin >> lebar;
}

double hitungluas() {
	
	return panjang * lebar;
}

void tampilluas() {
	cout << "Luasnya adalah " << hitungluas();
}

int main()
{//begin
	inputdata();
	tampilluas();

}

