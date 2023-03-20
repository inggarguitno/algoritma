
#include <iostream>
using namespace std;

float luasPersegi(float p, float l) {
	return p * l;
}

float LuasLingkaran(float r) {
	return 3.14 * r * r;
}
float LuasSegitiga(float a, float t) {
	return 0.5 * a * t;
}
int main() {
	float panjang, lebar, tinggi, alas, jejari;
	int pilihan;

	do {
		cout << "===========================" << endl;
		cout << "=========MAIN MENU=========" << endl;
		cout << "===========================" << endl;
		cout << "1. Luas Persegi" << endl;
		cout << "2. Luas Lingkaran" << endl;
		cout << "3. Luas Segitiga" << endl;
		cout << "4. Exit" << endl;
		cout << "Pilihan = " << endl;
		cin >> pilihan;

		switch (pilihan) {
		case 1:
			cout << "Menghitung Luas persegi" << endl;
			cout << "Masukan Panjang" << endl;
			cin >> panjang;
			cout << "Masukan Lebar" << endl;
			cin >> lebar;
			cout << "Luas Persegi = " << LuasPersegi(panjang, lebar) << endl;
			break;
		case 2:
			cout << "Masukan jari - jari = " << endl;
			cin >> jejari;
			cout << "Luas Lingkaran adalah = " << LuasLingkaran(jejari) << endl;
			break;
		case 3:
			cout << "\n\nmenghitung Luas Segitiga" << endl;
			cout << "Masukan Tinggi = ";
			cin >> tinggi;
			cout << "Luas Segitiga adalah = " << LuasSegitiga(alas, tinggi) << endl;
			break;
		default:
			cout << "PILIHAN SALAH" << endl;
			break;
		}
	} while (pilihan != 4);
}


	



	




		 