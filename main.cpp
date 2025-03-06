#include <iostream>
using namespace std;

int main()
{//begin
	//numeric panjang, lebar, luas
	double panjang;
	double lebar;
	double luas;
	cout << "Masukkan panjangnya = ";
	//accept panjang
	cin >> panjang;
	cout << "Masukkan lebarnya = ";
	//accept lebar
	cin >> lebar;

	luas = panjang * lebar;

	cout << "Luasnya adalah " << luas;

}
