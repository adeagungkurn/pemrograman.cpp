/*
//Latihan Tipe Data
//Latihan 3.1

#include <iostream>
using namespace std;

	int angka = 10;
 	double doubleSaya =2.71828;
 	float floatSaya = 3.14;
 	char charSaya= 'A';
 	bool boolSaya = true;
 	string stringSaya = "Hallo Ummuba";

int main ()
 {
	cout << "Angka saya adalah:" << angka <<endl;
	cout << "Double saya adalah:" << doubleSaya <<endl;
	cout << "char saya adalah:" << charSaya <<endl;
	cout << "Boolean saya adalah:" << boolSaya <<endl;
	cout << "String saya adalah: " << stringSaya <<endl;

 }

*/



//Latihan 3.2
#include <iostream>
using namespace std;

int x,y,sum;

int main ()
{
	cout <<"Program Kalkulator Penjumlahan" <<endl;
	cout <<"------------------------------"<<endl;
	cout <<"Inputkan angka pertama: ";
	cin >> x;
	cout <<"------------------------------"<<endl;
	cout <<"Inputkan angka kedua: ";
	cin >> y;
	sum	= x+y;

	cout <<"Hasil perhitungan kalkulator Anda : " <<sum;

}












/*
//latihan.3.3

#include <iostream>
using namespace std;

int main()
{
    string nama;
    string prodi;
    string sekolah;

    cout << "Tuliskan nama: ";
    cin >> nama;
	cout << "Tuliskan Prodi yang kamu pilih: ";
    cin >> prodi;
    cout << "Tuliskan Asal sekolah: ";
    cin >> sekolah;


    cout << "Selamat datang di kampus UMMUBA" << endl;

    return 0;
}
*/







/*
//Latihan 3.4 Variabel & Tipe Data(Biodata)//
#include <iostream>
using namespace std;

int main()
{

  string nama;
  int umur;
  char jenis_kelamin;

  cout << "Nama Lengkap Anda?" << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  getline(cin,nama);

  cout << "Berapa umurmu Anda saat ini?" << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  cin >> umur;

  cout << "Jenis kelamin,pilih salah satu [L/P]: ";
  // menyimpan data ke variabel
  cin >> jenis_kelamin;

  // --- proses output ---
  cout << "Salam kenal, " << nama << " Saat ini anda berusia ";
  cout << umur << " dan Anda berjenis kelamin "<< jenis_kelamin;

  return 0;
}
*/
