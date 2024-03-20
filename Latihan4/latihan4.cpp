
/*
//Latihan Operator Aritmatika//
#include <iostream>
using namespace std;

int main()
{
  int a = 10, b = 5;

  cout << "Program Menampilkan Operator" << endl;
  cout << "============================" << endl;
  // Penjumlahan
  int hasil_tambah = a + b;
  cout << "Hasil penjumlahan " << a << " + " << b << " = " << hasil_tambah << endl;

  // Pengurangan
  int hasil_kurang = a - b;
  cout << "Hasil pengurangan " << a << " - " << b << " = " << hasil_kurang << endl;

  // Perkalian
  int hasil_kali = a * b;
  cout << "Hasil perkalian " << a << " * " << b << " = " << hasil_kali << endl;

  // Pembagian
  int hasil_bagi = a / b;
  cout << "Hasil pembagian " << a << " / " << b << " = " << hasil_bagi << endl;

  // Modulus
  int hasil_modulus = a % b;
  cout << "Hasil modulus " << a << " % " << b << " = " << hasil_modulus << endl;

  return 0;
}
*/




//Latihan membuat kalkulator menggunakan Operator Aritmatika//

#include <iostream>
using namespace std;

int main() {
  char operasi;
  float num1, num2;

  // input operasi dan operand/nilai
  cout << "Masukkan operasi (+, -, *, /): ";
  cin >> operasi;
  cout << "Masukkan nilai pertama: ";
  cin >> num1;
  cout << "Masukkan nilai kedua: ";
  cin >> num2;


  switch (operasi) {
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
      break;
    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      break;
    default:
      cout << "Operasi tidak valid!" << endl;
  }

  return 0;
}
